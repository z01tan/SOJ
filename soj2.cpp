#include <iostream>
//#include <string>


class Tree
{
private:

  Tree* LeftBranch;
  Tree* RightBranch;
  std::string node;
  const std::string vars = "abcdefghijklmnopqrstuvwzyz";
  const std::string opes1 = "+-";
  const std::string opes2 = "*";
  const std::string opes3 = "/^";
  const char bra  = '(';
  const char ket  = ')';

public:

  Tree()
  {
    RightBranch=NULL;
    LeftBranch=NULL;
    node = "";
    std::cout<<"tree constructor"<<std::endl;
  }

  Tree(std::string n)
  {
    node = n;
    RightBranch=NULL;
    LeftBranch=NULL;

  }

  ~Tree()
  {
    if(RightBranch!=NULL)
      {
	delete RightBranch;
      }
    if(LeftBranch!=NULL)
      {
	delete LeftBranch;
      }
  }

  void setNode(std::string n)
  {
    node = n;
  }
  
  std::string getNode()
  {
    return node;
  }
  
  void SetLeftBranch(Tree* lb)
  {
    LeftBranch = lb;
  }

  void SetRightBranch(Tree* rb)
  {
    RightBranch = rb;
  }
  
  Tree* GetLeftBranch()
  {
    return LeftBranch;
  }

  Tree* GetRightBranch()
  {
    return RightBranch;
  }

  void Split(std::string s,std::string op)
  {
    int lpind = std::string::npos;
      
    int bracount=0;
    for(int i=0;i<s.size();++i)
      {
	if(s[i]==bra)
	  ++bracount;
	else if(s[i]==ket)
	  --bracount;
	  
	lpind = op.find(s[i]);
	if(lpind!=std::string::npos and bracount==0)
	  {
	      
	    setNode(s.substr(i,1));
	    LeftBranch->Insert(s.substr(0,i));
	    RightBranch->Insert(s.substr(i+1,s.size()-(i+1)));
	    return;
	  }
      }
    
    
  }

  void Insert(std::string s)
  {
    std::cout<<"insertion: "<<s<<std::endl;
    if(s.size()==1)
      {
	node = s;
	return ;
      }
    else{

      LeftBranch = new Tree();
      RightBranch = new Tree();
      
      
      
      /*
      if(vars.find(s[0])!=std::string::npos) //isIn
	{

	  LeftBranch->Insert(s.substr(0,1));
	  std::cout<<"LeftBrunck insert : "<<s.substr(0,1)<<std::endl;
	  setNode(s.substr(1,1));
	  std::cout<<"node :"<<s.substr(1,1)<<std::endl;
	  RightBranch->Insert(s.substr(2,s.size()-1));
	  std::cout<<"RightBrunck insert : "<<s.substr(2,s.size()-1)<<std::endl;
	}

      else if(s[0]==bra)
	{
	  int bracount = 0;
	  for(int i=0;i<s.size();++i)
	    {
	      if(s[i]==bra)
		  ++bracount;
	      else if(s[i]==ket)
		  --bracount;

	      if(s[i]==ket and bracount==0)
		{
		  LeftBranch->Insert(s.substr(1,i-1));
		  if(i!=s.size()-1)
		    {
		      setNode(s.substr(i+1,1));
		      RightBranch->Insert(s.substr(i+2,s.size()-(i+1)));
		      break;
		    }
		}

	    }
	}

    */}
  }
  
  std::string Traverse()
  {
    std::cout<<"traverse"<<std::endl;
    std::string rb="",lb = "";
    if(LeftBranch!=NULL)
      lb = LeftBranch->Traverse();
    else
      std::cout<<"lb is NULL"<<std::endl;
    if(RightBranch!=NULL)
      rb = RightBranch->Traverse();
    else
      std::cout<<"rb is NULL"<<std::endl;

    return (node + lb + rb);
  }

};

int main()
{
  std::string s = "";
  std::cout<<s<<std::endl;

  Tree* T = new Tree();
  T->Insert(s);
  std::cout<<T->Traverse()<<std::endl;
  return 0;
}
