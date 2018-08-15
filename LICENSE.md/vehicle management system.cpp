#include<iostream>
#include<fstream>  
#include<string>
#include<iomanip>
#include<cstdlib> 
#include<conio.h>
const int Bmaintaintip=2000;         //大客车每月基本维护费用 
const int Smaintaintip=1000;         //小轿车每月基本维护费用 
const int Tmaintaintip=1500;         //卡车每月基本维护费用 
const double dieselprice=7.45;       //柴油价格（每升） 
const double gasprice=7.0;          //汽油价格（每升） 
using namespace std;


//**************************************************Date类**************************************************************// 
class Date{
	public:
		Date()
	{ 
		this->year=0;
		this->month=0;                 //默认构造函数 
		this->day=0;
    } 
	Date(int year,int month,int day)
	{
		this->year=year;
		this->month=month;            //带参构造函数 
		this->day=day;
	}
    void setyear()
	{
		cout<<"请输入年份："; 
		cin>>year;					 //用户输入年份函数 
	}    
    void setmonth()
	{
		cout<<"请输入月份："; 
		cin>>month;					//用户输入月份函数 
	}
    void setday()
	{
		cout<<"请输入号数："; 
		cin>>day;					//用户输入号数函数 
	}
	int getyear()
	{
		return year;				//获取年份函数 
	}
	int getmonth()
	{
		return month;				//获取月份函数 
	}
	int getday()
	{
		return day;					//	获取号数函数 
	}
	private:
	int year;						//年 
	int month;						//月 
	int day;						//日 
};


//******************************************************car类<基类>****************************************************// 
class car{
	public:
		Date purtime;                 //购车时间 
		car(){};					  //car类默认构造函数 
		car(int number,string licNumber,string manuCompany,int year,int month,int day,string size,int totalmiles,int peroilConsumpt):purtime(year,month,day)
		{
			this->number=number;
			this->licNumber=licNumber;
			this->manuCompany=manuCompany;       //car类带参构造函数  
			this->size=size;
			this->peroilConsumpt=peroilConsumpt;
		}
		void setnumber()
		{
			number=i++;					//自动生成编号函数 
		}
		void changenumber()
		{
			cout<<"请输入编号：";		//设定\修改编号函数 
			cin>>number;
		}
		void setlicNumber()
		{
			cout<<"请输入车牌号：";		//设定\修改车牌号函数 
			cin>>licNumber;
		}
		void setmanuCompany()
		{
			cout<<"请输入制造公司：";	//设定\修改制造公司函数 
			cin>>manuCompany;
		}
		void setpurtime()
		{
			purtime.setyear();
			purtime.setmonth();			//设定\修改购车时间函数 
			purtime.setday();
		}
		void setsize()
		{
			cout<<"请输入型号：";		//设定\修改车辆类型函数 
			cin>>size;
		}
		void settotalmiles()
		{
			cout<<"请输入总公里数：";	//设定\修改总公里数函数 
			cin>>totalmiles;
		}
		void setroadToll()
		{	
			cout<<"请输入养路费：";		//设定\修改养路费函数 
			cin>>roadToll;
		}
		void setperoilConsumpt()
		{
			cout<<"请输入耗油量（每公里）：";	//设定\修改耗油量（每公里）函数 
			cin>>peroilConsumpt;
		}
		void setbusload()
		{
			cout<<"请输入载客量：";				//设定\修改载客量函数 
			cin>>busload;
		}
		void setcases()
		{
			cout<<"请输入箱数：";				//设定\修改箱数函数 
			cin>>cases;
		}
		void setload()
		{
			cout<<"载重量：";					//设定\修改载重量函数 
			cin>>load;
		}
		void incsetcount1()
		{
			count1++;							//自增大客车总数函数 
		}
		void incsetcount2()
		{
			count2++;							//自增小轿车总数函数  
		}
		void incsetcount3()
		{
			count3++;							//自增卡车总数函数 							
		}
		void decsetcount1()
		{
			count1--;							//自减大客车总数函数 				
		}
		void decsetcount2()
		{
			count2--;							//自减小轿车总数函数   
		}
		void decsetcount3()
		{
			count3--;							//自减卡车总数函数 	
		}
		int  getnumber()
		{
			return number;						//获取编号函数 
		}
		string getlicNumber()
		{
			return licNumber;					//获取车牌号函数 
		}
		string getmanuCompany()
		{
			return manuCompany;					//获取制造公司函数 
		}
		string getsize()
		{
			return size;						//获取型号函数 
		}
		int gettoatlmiles()
		{
			return totalmiles;					//获取总公里数函数 
		}
		int getroadToll()
		{
			return roadToll;					//获取养路费函数 
		}
		int getyear()
		{
			return year;						//获取年份函数 
		}
		int getmonth()
		{
			return month;						//获取月份函数 
		}
		int getday()
		{
			return day;							//获取号数函数  
		}
		int getperoilConsumpt()
		{
			return peroilConsumpt;				//获取耗油量函数（每公里） 
		}
			int  getbusload()
		{
			return busload;						//获取载客量函数 
		}
		int  getcases()
		{
			return cases;						//获取箱数函数 
		}
		int  getload()
		{
			return load;						//获取载重量函数 
		}
			int getbigbuscount1()
		{
			return count1;						//获取大客车总量函数 
		}
		int getseadncount2()
		{
			return count2;						//获取小轿车量函数 
		}
		int gettruckcount3()
		{
			return count3;						//获取卡车总量函数 
		}
		double Btotalprice()
		{
			return peroilConsumpt*dieselprice+Bmaintaintip;			//获取大客车总费用 
		}
		double Stotalprice()
		{
			return peroilConsumpt*gasprice+Smaintaintip;			//获取小轿车总费用 
		}
		double Ttotalprice()
		{
			return peroilConsumpt*dieselprice+Tmaintaintip;			//获取卡车总费用 
		}
		car *next;                    //指向本类的指针  
		
	private:
		static int i;				//设为静态变量，对编号进行赋值 
		static int count1;			//对大客车计数 
		static int count2;			//对小轿车计数 
		static int count3;			//对卡车计数 
		int number;                   //编号 
		string licNumber;             //车牌号 
		string manuCompany;           //制造公司 
		int year,month,day;           //对购车时间的参数的初始化 
		string size;                  //车辆型号 
		int totalmiles;               //总公里数 
		int roadToll;                 //养路费 
		int peroilConsumpt;           //耗油量（每公里） 
		int busload;                  //载客量 
		int cases;                    //箱数 
		int load;                     //载重量 
};
int car::i=1;						//类外初始化 
int car::count1=0;					//同上 
int car::count2=0;					//同上
int car::count3=0;					//同上
//---------------------------------------manage类（管理类）------------------------------------------------------// 				//声明car类型全局指针 
class manage{
	public:
	    void add();					//添加函数 
		void search();				//查询函数		
		void show();				//显示函数 
		void edit();				//编辑函数 
		car* deleted(); 
	    static car*head;
		static car*head1;	
};
car *manage::head;
car *manage::head1=NULL;
//---------------------------------------------------------------------------------------------------------------// 
void manage::add()     //添加函数 
{
			car *ptr,*p1;
			char n;
			cout<<"是否添加车辆信息？如果是请输入Y/y"<<endl;
			cin>>n; 
			while(n=='Y'||n=='y')
			{
			ptr=new car;
     		ptr->setnumber();ptr->setlicNumber();ptr->setmanuCompany();ptr->setpurtime();
			ptr->settotalmiles();ptr->setroadToll();ptr->setperoilConsumpt();ptr->setsize();
			if(ptr->getsize()=="bigbus")
			{
				cout<<"该车类型为大客车，所以请输入"<<endl;  
				ptr->setbusload();		//判断是否为大客车，是，则添加其特有属性 
				ptr->incsetcount1();	
			}
			if(ptr->getsize()=="seadn")
			{
				cout<<"该车类型为小轿车，所以请输入"<<endl; 
				ptr->setcases();		//判断是否为小轿车，是，则添加其特有属性 
				ptr->incsetcount2();
			}
			if(ptr->getsize()=="truck")
			{
				cout<<"该车类型为卡车，所以请输入"<<endl;	//判断是否为卡车，是，则添加其特有属性  
				ptr->setload();
				ptr->incsetcount3();
			}
			if(NULL==head)
			{
				head=ptr;	
			}	
			else{
				p1->next=ptr;
			    }
				p1=ptr;
				p1->next=NULL;
				cout<<"是否继续添加，如果是，请输入Y/y"<<endl;
				cin>>n;
			}
	 		cout<<"添加结束"<<endl;
	 		cout<<"\n按任意键返回！";
	 		getch();
}
	 
//------------------------------------------------------------------------------------------------------------------// 
void manage::search()		//查询函数 
{
	int m;
	cout<<"您想根据哪种方式来查询车辆？"<<endl;
	cout<<"按车辆制造公司查询（请按1），按编号查询（请按2），按类别查询（请按3）"<<endl;
	cout<<"请输入你想查询的方式所对应的数字"<<endl;
	cin>>m;
	while(m){
		switch(m){
			case 1:
				{
				car *p=head;
				string k;
				cout<<"请输入你想查的车辆对应的制造公司名:"<<endl; 
				cin>>k;
				while(p!=NULL)   //判断是否为空链表 
				{
					if(p->getmanuCompany()==k)		//判断是否有此记录 
					{
						cout<<"车的编号为"<<p->getnumber()<<endl; cout<<"车牌号为"<<p->getlicNumber()<<endl;
						cout<<"车的制造公司为"<<p->getmanuCompany()<<endl; cout<<"车的总公里数为"<<p->gettoatlmiles()<<endl;
						cout<<"购车时间为"<<p->purtime.getyear()<<"年"<<p->purtime.getmonth()<<"月"<<p->purtime.getday() <<"号"<<endl;
						cout<<"车的养路费为"<<p->getroadToll()<<endl; cout<<"车的耗油量为（每公里）"<<p->getperoilConsumpt()<<endl;
						if(p->getsize()=="bigbus") 
						{
							cout<<"车的最大载客量为"<<p->getbusload()<<endl;
							cout<<"车的基本维护费用为"<<Bmaintaintip<<"元"<<endl;
							cout<<"车的累计总费用为"<<p->Btotalprice()<<"元"<<endl; 
						}
						if(p->getsize()=="seadn")
						{
							cout<<"车的箱数为"<<p->getcases()<<endl;
							cout<<"车的基本维护费用为"<<Smaintaintip<<"元"<<endl;
							cout<<"车的累计总费用为"<<p->Stotalprice()<<"元"<<endl;  
						}
						if(p->getsize()=="truck")
						{
							cout<<"车的最大载客量为"<<p->getload()<<endl;
							cout<<"车的基本维护费用为"<<Tmaintaintip<<"元"<<endl;
							cout<<"车的累计总费用为"<<p->Ttotalprice()<<"元"<<endl;   
					    }
						cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
						break; 
					}
					p=p->next;		//遍历查找 
				}
				if(p==NULL)
				{
					cout<<"该车辆制造公司不存在!"<<endl;
					cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
					break;			//遍历结束未找到 
				}
				break;	
				
			}
			case 2:
				{
				car *t=head;
				int h;
				cout<<"请输入你想查的车辆对应的编号:"<<endl; 
				cin>>h;
				while(t!=NULL)		//判断是否为空链表 
				{
					if(t->getnumber()==h)		//判断是否有此记录 
					{
						cout<<"车的编号为"<<t->getnumber()<<endl; cout<<"车牌号为"<<t->getlicNumber()<<endl;
						cout<<"车的制造公司为"<<t->getmanuCompany()<<endl; cout<<"车的总公里数为"<<t->gettoatlmiles()<<endl;
						cout<<"购车时间为"<<t->purtime.getyear()<<"年"<<t->purtime.getmonth()<<"月"<<t->purtime.getday() <<"号"<<endl;
						cout<<"车的养路费为"<<t->getroadToll()<<endl; cout<<"车的耗油量为（每公里）"<<t->getperoilConsumpt()<<endl;
						if(t->getsize()=="bigbus") 
						{
							cout<<"车的最大载客量为"<<t->getbusload()<<endl;
							cout<<"车的基本维护费用为"<<Bmaintaintip<<"元"<<endl;
							cout<<"车的累计总费用为"<<t->Btotalprice()<<"元"<<endl;   
						}
						if(t->getsize()=="seadn")
						{
							cout<<"车的箱数为"<<t->getcases()<<endl;
							cout<<"车的基本维护费用为"<<Smaintaintip<<"元"<<endl;
							cout<<"车的累计总费用为"<<t->Stotalprice()<<"元"<<endl;  
						}
						if(t->getsize()=="truck")
						{
							cout<<"车的最大载客量为"<<t->getload()<<endl;
							cout<<"车的基本维护费用为"<<Tmaintaintip<<"元"<<endl;
							cout<<"车的累计总费用为"<<t->Ttotalprice()<<"元"<<endl;   
					    }
						cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
						break;
					}
					t=t->next;			//遍历查找 
				}
				if(t==NULL)
				{
					cout<<"该编号不存在"<<endl;
					cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
					break;				//遍历结束未找到 
				 } 
				 	break;	
			}
			case 3:
				{
				car *l=head;
				string o;
				cout<<"请输入你想查的车辆对应的类别:"<<endl; 
				cin>>o;
				while(l!=NULL)			//判断是否为空链表 
				{
					if(l->getsize()==o)		//判断是否有此记录 
					{
						cout<<"车的编号为"<<l->getnumber()<<endl; cout<<"车牌号为"<<l->getlicNumber()<<endl;
						cout<<"车的制造公司为"<<l->getmanuCompany()<<endl; cout<<"车的总公里数为"<<l->gettoatlmiles()<<endl;
						cout<<"购车时间为"<<l->purtime.getyear()<<"年"<<l->purtime.getmonth()<<"月"<<l->purtime.getday() <<"号"<<endl;
						cout<<"车的养路费为"<<l->getroadToll()<<endl; cout<<"车的耗油量为（每公里）"<<l->getperoilConsumpt()<<endl;
						if(l->getsize()=="bigbus") 
						{
							cout<<"车的最大载客量为"<<l->getbusload()<<endl;
							cout<<"车的基本维护费用为"<<Bmaintaintip<<"元"<<endl;
							cout<<"车的累计总费用为"<<l->Btotalprice()<<"元"<<endl;    
						}
						if(l->getsize()=="seadn")
						{
							cout<<"车的箱数为"<<l->getcases()<<endl;
							cout<<"车的基本维护费用为"<<Smaintaintip<<"元"<<endl;
							cout<<"车的累计总费用为"<<l->Stotalprice()<<"元"<<endl;  
						}
						if(l->getsize()=="truck")
						{
							cout<<"车的最大载客量为"<<l->getload()<<endl;
							cout<<"车的基本维护费用为"<<Tmaintaintip<<"元"<<endl;
							cout<<"车的累计总费用为"<<l->Ttotalprice()<<"元"<<endl;   
					    }
						cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
						break; 
					}
					l=l->next;		//遍历查找 
				}
				if(l==NULL) 
				{
					cout<<"该类别没有车辆"<<endl;
					cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
					break;		//遍历结束未找到 
				} 
					break;
		}
			
	}
	cout<<"是否继续查询，如果是，请输入不为0的数："<<endl;
	cin>>m; 
}
} 
//------------------------------------------------------------------------------------------------------------//
void manage::show()			//显示函数 
{
	car *pp=head;
		if(!pp)
		{
			cout<<"当前没有任何车辆信息"<<endl; 	//判断是否为空链表
			cout<<"\n按任意键返回！";
			getch(); 
		}	
		else{
	 while(pp!=NULL){				//不为空，则遍历链表 
	 	cout<<"该车的编号为"<<pp->getnumber()<<endl; cout<<"该车的车牌号为"<<pp->getlicNumber()<<endl;
		cout<<"该车的制造公司为"<<pp->getmanuCompany()<<endl;	cout<<"该车的型号为"<<pp->getsize()<<endl;
	    cout<<"该车的总公里数为"<<pp->gettoatlmiles()<<endl;cout<<"该车的养路费为"<<pp->getroadToll()<<endl;
		cout<<"该车的购买时间为"<<" "<<pp->purtime.getyear()<<"年"<<pp->purtime.getmonth()<<"月"<<pp->purtime.getday()<<"日"<<endl; 
		cout<<"该车的每公里耗油量为"<<pp->getperoilConsumpt()<<endl;
		if(pp->getsize()=="bigbus")
		{
			cout<<"该车的最大载客量为"<<pp->getbusload()<<endl;
			cout<<"该车的基本维护费用为"<<Bmaintaintip<<endl; 		//显示大客车特有属性 
			cout<<"车的累计总费用为"<<pp->Btotalprice()<<"元"<<endl; 
		}
		if(pp->getsize()=="seadn")
		{
			cout<<"该车的箱数为"<<pp->getcases()<<endl;
			cout<<"该车的基本维护费用为"<<Smaintaintip<<endl;		//显示小轿车特有属性 
			cout<<"车的累计总费用为"<<pp->Stotalprice()<<"元"<<endl; 
		}
		if(pp->getsize()=="truck")
		{
			cout<<"该车的载重量为"<<pp->getload()<<endl;
			cout<<"该车的基本维护费用为"<<Tmaintaintip<<endl;		//显示卡车特有属性 
			cout<<"车的累计总费用为"<<pp->Ttotalprice()<<"元"<<endl; 
		}
		pp=pp->next; 
              }	
            cout<<"\n按任意键返回！";
			getch(); 
	}
              
}
//--------------------------------------------------------------------------------------------------------------// 
void manage::edit()			//编辑函数 
{
	int d;
		cout<<"您想根据哪种方式来查询车辆？"<<endl;
		cout<<"按车辆制造公司查询（请按1），按编号查询（请按2），按类别查询（请按3）"<<endl;
		cout<<"请输入你想查询的方式所对应的数字"<<endl;
			cin>>d;
			while(d){
			switch(d){
				case 1:{
					car *d=head;
					string u;
					cout<<"请输入你想查询的车辆对应的制造公司名"<<endl; 
					cin>>u;
					while(d!=NULL)			//遍历链表查找到需修改的记录 
					{
						if(d->getmanuCompany()==u)
						{
							cout<<"是否想修改此车的相关信息,请根据需要输入"<<endl;
							int choice;
							if(d->getsize()=="bigbus")
							{
								cout<<"该车为大客车，所以可以依据自己的需要输入1~9中的任一选项"<<endl;
								cout<<"--------------------------------------------------------------------------------------------------------"<<endl; 
							}
							if(d->getsize()=="seadn") 
							{
								cout<<"该车为小轿车，所以可以依据自己的需要输入1~8及10中的任一选项"<<endl;
								cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
							} 
							if(d->getsize()=="truck") 
							{
								cout<<"该车为小轿车，所以可以依据自己的需要输入1~8及11中的任一选项"<<endl;
								cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
							} 
							cout<<"/*  (1)编号  */*  （2)车牌号  */*  （3）车辆制造公司  */*  (4)购车时间  */"
							<<"*  （5）车辆型号  */*  （6）总公里数  */*  （7）耗油量《每公里》  */*  （8）养路费*  /"
							<<"[/*  (9)最大载客量  */*  （10）箱数  */*  （11）载重量  *]《9，10，11》据屏幕上的提示信息选其中一种"<<endl;
							cin>>choice;
							cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
							while(choice){
							switch(choice){				//选择要修改的属性 
								case 1:
									d->changenumber();
									break;
								case 2:
									d->setlicNumber();
									break;
								case 3:
									d->setmanuCompany();
									break;
								case 4:
									d->setpurtime();
									break;
								case 5:
									if(d->getsize()=="bigbus")
									{
										d->decsetcount1();
									}
									if(d->getsize()=="seadn")
									{
										d->decsetcount2();
									}
										if(d->getsize()=="truck")
									{
										d->decsetcount3();
									}
									
									d->setsize();
									if(d->getsize()=="bigbus")
									{
										d->incsetcount1();
										cout<<"请输入9完成对最大载客量的编辑"<<endl;
									}
									if(d->getsize()=="seadn")
									{
										d->incsetcount2();
										cout<<"请输入10完成对箱数的编辑"<<endl; 
									}
									if(d->getsize()=="truck")
									{
										d->incsetcount3();
										cout<<"请输入11完成对载重量的编辑"<<endl; 
									}
									break;
								case 6:
								    d->settotalmiles();
									break;
								case 7:
									d->setperoilConsumpt() ;
									break;
								case 8:
									d->setroadToll();
									break;
								case 9:
									d->setbusload();
									break;
								case 10:
									d->setcases();
									break;
								case 11:
									d->setload();
									break;
							}
							cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"是否继续修改，如果继续，请输入不为0的数"<<endl;
							cin>>choice;
						}
							break;
					}
							d=d->next;
						}
				if(d==NULL)
				{
					cout<<"当前不存在该制造公司的车辆的记录，故不可修改"<<endl;		//遍历链表后未找到l
					break;
				}
				break;
			}
			case 2:{
				car *q=head;
				int a;
				cout<<"请输入你想查询的车辆对应的编号"<<endl;
				cin>>a;
				while(q!=NULL)				//遍历链表查找到需修改的记录  
				{
					if(q->getnumber()==a)
					{
						cout<<"是否想修改此车的相关信息，请根据需要输入"<<endl;
						int choice1;
						if(q->getsize()=="bigbus")
							{
								cout<<"该车为大客车，所以可以依据自己的需要输入1~9中的任一选项"<<endl;
								cout<<"--------------------------------------------------------------------------------------------------------"<<endl; 
							}
							if(q->getsize()=="seadn") 
							{
								cout<<"该车为小轿车，所以可以依据自己的需要输入1~8及10中的任一选项"<<endl;
								cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
							} 
							if(q->getsize()=="truck") 
							{
								cout<<"该车为小轿车，所以可以依据自己的需要输入1~8及11中的任一选项"<<endl;
								cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
							} 
						cout<<"/*  (1)编号  */*  （2)车牌号  *//*  （3）车辆制造公司  *//*  (4)购车时间  //"
							<<"*  （5）车辆型号  *//*  （6）总公里数  *//*  （7）耗油量《每公里》  *//*  （8）养路费*  /"
							<<"[/*  (9)最大载客量  *//*  （10）箱数  *//*  （11）载重量  *]《9，10，11》据屏幕上的提示信息选其中一种"<<endl;
							cin>>choice1;
						cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
						while(choice1)
						{
							switch(choice1){			//选择要修改的属性 
								case 1:
									q->changenumber();
									break;
								case 2:
									q->setlicNumber();
									break;
								case 3:
									q->setmanuCompany();
									break;
								case 4:
									q->setpurtime();
									break;
								case 5:
									if(q->getsize()=="bigbus")
									{
										q->decsetcount1();
									}
									if(q->getsize()=="seadn")
									{
										q->decsetcount2();
									}
										if(q->getsize()=="truck")
									{
										q->decsetcount3();
									}
									q->setsize();
									if(q->getsize()=="bigbus")
									{
										q->incsetcount1();
										cout<<"请输入9完成对最大载客量的编辑"<<endl;
									}
									if(q->getsize()=="seadn")
									{
										q->incsetcount2();
										cout<<"请输入10完成对箱数的编辑"<<endl; 
									}
									if(q->getsize()=="truck")
									{
										q->incsetcount3();
										cout<<"请输入11完成对载重量的编辑"<<endl; 
									}
									break;
								case 6:
									q->settotalmiles();
									break;
								case 7:
									q->setperoilConsumpt();
									break;
								case 8:
									q->setroadToll();
									break;
								case 9:
									q->setbusload();
									break;
								case 10:
									q->setcases();
									break;
								case 11:
									q->setload();
									break;	
							}
							cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"是否继续修改，如果继续，请输入不为0的数"<<endl;
							cin>>choice1;
							cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
							
						}
						break;
					}
						q=q->next;
				}
				if(q==NULL)
				{
					cout<<"当前不存在该编号的车辆的记录，故不可修改"<<endl;		//遍历链表后未找到 
					break;	
				}
				
				break;
			}
			case 3:{
				car *j=head;
				string b;
				cout<<"请输入你想查询的车辆对应的类别"<<endl;
				cin>>b;
				while(j!=NULL)			//遍历链表查找到需修改的记录  
				{
					if(j->getsize()==b)
					{
						int choice2;
						if(j->getsize()=="bigbus")
							{
								cout<<"该车为大客车，如果想修改此车信息，可以依据自己的需要输入1~9中的任一选项"<<endl;
								cout<<"--------------------------------------------------------------------------------------------------------"<<endl; 
							}
							if(j->getsize()=="seadn") 
							{
								cout<<"该车为小轿车，如果想修改此车信息，可以依据自己的需要输入1~8及10中的任一选项"<<endl;
								cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
							} 
							if(j->getsize()=="truck") 
							{
								cout<<"该车为卡车，如果想修改此车信息，可以依据自己的需要输入1~8及11中的任一选项"<<endl;
								cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
							} 
						cout<<"/*  (1)编号  *//*  （2)车牌号  *//*  （3）车辆制造公司  *//*  (4)购车时间  */"
							<<"*  （5）车辆型号  */*  （6）总公里数  */*  （7）耗油量《每公里》  */*  （8）养路费*  /"
							<<"[/*  (9)最大载客量  */*  （10）箱数  */*  （11）载重量  *]《9，10，11》据屏幕上的提示信息选其中一种"<<endl;
						cin>>choice2;
						cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
						while(choice2)
						{
							switch(choice2){			//选择需修改的属性 
								case 1:
									j->setnumber();
									break;
								case 2:
									j->setlicNumber();
									break;
								case 3:
									j->setmanuCompany();
									break;
								case 4:
									j->setpurtime();
									break;
								case 5:
									if(j->getsize()=="bigbus")
									{
										j->decsetcount1();
									}
									if(j->getsize()=="seadn")
									{
										j->decsetcount2();
									}
										if(j->getsize()=="truck")
									{
										j->decsetcount3();
									}
									j->setsize();
									if(j->getsize()=="bigbus")
									{
										j->incsetcount1();
										cout<<"请输入9完成对最大载客量的编辑"<<endl;
									}
									if(j->getsize()=="seadn")
									{
										j->incsetcount2();
										cout<<"请输入10完成对箱数的编辑"<<endl; 
									}
									if(j->getsize()=="truck")
									{
										j->incsetcount3();
										cout<<"请输入11完成对载重量的编辑"<<endl; 
									}
									break;
								case 6:
									j->settotalmiles();
									break;
								case 7:
									j->setperoilConsumpt();
									break;
								case 8:
									j->setroadToll();
									break;
								case 9:
									j->setbusload();
									break;
								case 10:
									j->setcases();
									break;
								case 11:
									j->setload();
									break;
							}
							cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"是否继续修改，如果继续，请输入不为0的数"<<endl;
							cin>>choice2;
						}
						break;
					}
						j=j->next;
				 } 
				 	if(j==NULL)
				{
					cout<<"当前不存在该类别的车辆的记录，故不可修改"<<endl;			//遍历链表后未找到 
					break;	
				}
				 break;
				}
					}
					cout<<"还想继续查询吗？"<<endl;
					cout<<"按车辆制造公司查询（请按1），按编号查询（请按2），按类别查询（请按3）"<<endl;
					cout<<"请输入你想查询的方式所对应的数字(不为0)"<<endl;
					cin>>d; 		
	}	
	cout<<"查询结束"<<endl;
	cout<<"\n按任意键返回！";
	getch(); 
}
//-------------------------------------------------------------------------------------------------------------// 
car* manage::deleted()		//删除函数 
{
	string num;
	car *a=head,*b=head;
	if(head==NULL)
	{
		cout<<"没有链表生成"<<endl;			//判断是否有链表生成
		cout<<"\n按任意键返回！";
			getch(); 
		return head;
	}
	if(head!=NULL)
	{
		cout<<"请输入你所要删除的车辆对应的车牌号:"<<endl;
		cin>>num;
	while(num!=a->getlicNumber()&&a->next!=NULL)
	{
		b=a;								//遍历链表寻找要删除的项 
		a=a->next;
	}
	
	}
	
	
	if(num==a->getlicNumber())
	{
		if(a==head)							//如果删改项为头节点 
		{
			if(a->getsize()=="bigbus")
			{
				a->decsetcount1();		 
			}
			if(a->getsize()=="seadn")
			{
				a->decsetcount2();
			}
			if(a->getsize()=="truck")
			{
				a->decsetcount3();
			}
			head=a->next;
			cout<<"此车的相关记录全部删除"<<endl;
			cout<<"\n按任意键返回！";
			getch(); 
		}
		else							//如果不为头节点 
		{
			if(a->getsize()=="bigbus")
			{
				a->decsetcount1();
			}
			if(a->getsize()=="seadn")
			{
				a->decsetcount2();
			}
			if(a->getsize()=="truck")
			{
				a->decsetcount3();
			}
			b->next=a->next;
			cout<<"\n此车的相关记录全部删除"<<endl;
			cout<<"\n按任意键返回！";
			getch(); 
		} 
		free(a);						//释放删改项的空间 
	}
	else
	{
		cout<<"没有找到该记录"<<endl;
		cout<<"\n按任意键返回！";
		getch();	                                 //遍历链表后未找到相关记录 
	}
	return head;
}
//----------------------------------------------------------------------------------------------------------------//
void menu()
{
	system("cls");
	cout<<"\n\n\n\t\t\t\t======================-车辆管理系统-======================\t\t\t"<<endl;
		cout<<endl; 
		cout<<"\t\t\t\t\t\t\t1.添加车辆"<<endl;
		cout<<"\t\t\t\t\t\t\t2.查询车辆"<<endl;
		cout<<"\t\t\t\t\t\t\t3.显示车辆信息库"<<endl;
		cout<<"\t\t\t\t\t\t\t4.编辑功能"<<endl;
		cout<<"\t\t\t\t\t\t\t5.删除车辆"<<endl;
		cout<<"\t\t\t\t\t\t\t6.退出系统"<<endl; 
		cout<<endl;
		cout<<"\t\t\t\t======================--------------======================\t\t\t"<<endl;
	    cout<<"\n\n\t\t\t\t请输入你想进行的功能:";
}
//------------------------------------------------主函数（main）-------------------------------------------------------------------// 
int main()
{
		manage m;		
		int ch;
		
		do{
			menu(); 
			cin>>ch;
		switch(ch)
		{
		case 1:
				{
					system("cls");m.add();
					break;
		        }
			case 2:
				{
					system("cls");m.search();
					break;
				}
			case 3:
				{
					 system("cls");m.show();
			 		 break;
				}
			case 4:{
					system("cls");m.edit();
					break;
					} 
				
			case 5:
				{
					system("cls");m.deleted();
					break; 
				}	   
			case 6:
			{ 
				system("cls");cout<<"\n成功退出系统！";exit(0);
			}
			 
		} 
		}while(ch);   
	return 0;
	
}
