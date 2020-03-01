/*
//Task 2. Write an OOP code that implements the concepts of car and road intersection, inputs the parameters and outputs the suggestion to accelerate or stop.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	double v0, x0, t, dS, ap, an;
	
	cout<<"Car's initial speed"<<endl;
	cin>>v0;
	
	cout<<"Initial distance to the intersection"<<endl;
	cin>>x0;
	
	cout<<"Duration of the yellow light"<<endl;
	cin>>t;
	
	cout<<"Intersection width"<<endl;
	cin>>dS;
	
	cout<<"Magnitude of car constant positive acceleration"<<endl;
	cin>>ap;
	
	cout<<"Magnitude of car constant negative acceleration"<<endl;
	cin>>an;

	if(v0<20 || v0 >80 || x0<10 || x0>150 || t<2 || t>5 || dS < 5 || dS>20 || ap < 1 || ap > 3 || an < 1 || an > 3)
	{
		cout<<"invalid input";
		return 0;
	}
	
	double v = v0*1000/3600;
	
	if(t*v >= x0+dS)
	{
		cout<<"The car should not accelerate. It will pass the crossroad";
	}
	else if (t*v + ap*t*t/2 >= x0+dS)
	{
		cout<<"The car should accelerate. It will pass the crossroad";
	}
	else if (t*v - an*t*t/2 <= x0)
	{
		cout<<"The car should stop(decelerate). It will not pass the crossroad ";
	}
	else
	{
		cout<<"No solution is suggested. A clash or a fine is inevitable";
	}
	return 0;
}
*/
/*
//Task 3. Run the program for different values of the input parameters and prepare a short report with the discussion how they affect the decision.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	double v0, x0, t, dS, ap, an;
	int a=0,b=0,c=0, d=0;
	// the program runs over all possible combinations of inputs (in case of distance and velocity with large intervals), and showcases some possible outputs and the distribution of those.
	for(v0 = 20; v0 <=80; v0+=10)
	{
		for(x0 = 10; x0<=150; x0+=10)
		{
			for(t=2; t<=5; t++)
			{
				for(dS =5; dS <=20; dS+=5)
				{
					for(ap=1; ap<=3; ap++)
					{
						for(an=1; an<=3; an++)
						{
							double v = v0*1000/3600;
							if(t*v >= x0+dS)
							{
							    a%100==0 ? cout<<endl<<"for values "<<v0<<" "<<x0<<" "<<t<<" "<<dS<<" "<<ap<<" "<<an<<" "<<endl<<"The car should not accelerate. It will pass the crossroad": cout<<"" ;
								a++;
							}
							else if (t*v + ap*t*t/2 >= x0+dS)
							{
								b%100==0 ? cout<<endl<<"for values "<<v0<<" "<<x0<<" "<<t<<" "<<dS<<" "<<ap<<" "<<an<<" "<<endl<<"The car should accelerate. It will pass the crossroad": cout<<"" ;
								b++;
							}
							else if (t*v - an*t*t/2 <= x0)
							{
								c%100==0 ? cout<<endl<<"for values "<<v0<<" "<<x0<<" "<<t<<" "<<dS<<" "<<ap<<" "<<an<<" "<<endl<<"The car should stop(decelerate). It will not pass the crossroad " : cout<< "" ;
								c++;
							}
							else
							{
								d%10==0 ? cout<<endl<<"for values "<<v0<<" "<<x0<<" "<<t<<" "<<dS<<" "<<ap<<" "<<an<<" "<<endl<<"No solution is suggested. A clash or a fine is inevitable" : cout<<"" ;
								d++;
							}
						}	
					}
				}
			}
		}
	}
	cout<<endl<<"The distribution of outcomes are "<<endl<<a<<" "<<b<<" "<<c<<" "<<d;
return 0;
}
*/

/*
// Task 5. Repeat the project assuming bounded maximal speed 50 km/h ≤ Vmax ≤ 100 km/h.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	double v0, x0, t, dS, ap, an;
	
	cout<<"Car's initial speed"<<endl;
	cin>>v0;
	
	cout<<"Initial distance to the intersection"<<endl;
	cin>>x0;
	
	cout<<"Duration of the yellow light"<<endl;
	cin>>t;
	
	cout<<"Intersection width"<<endl;
	cin>>dS;
	
	cout<<"Magnitude of car constant positive acceleration"<<endl;
	cin>>ap;
	
	cout<<"Magnitude of car constant negative acceleration"<<endl;
	cin>>an;
	
	

	if(v0<20 || v0 >80 || x0<10 || x0>150 || t<2 || t>5 || dS < 5 || dS>20 || ap < 1 || ap > 3 || an < 1 || an > 3)
	{
		cout<<"invalid input";
		return 0;
	}
	
	double v = v0*1000/3600;

	if(t*v >= x0+dS && 13.88 < v && v < 27.77) // v belongs to ( 50*10000/3600, 100*10000/3600 )
	{
		cout<<"The car should not accelerate. It will pass the crossroad";
	}
	else if (t*v + ap*t*t/2 >= x0+dS &&  13.88 < v+ap*t/2 && v+ap*t/2 < 27.77)
	{
		cout<<"The car should accelerate. It will pass the crossroad";
	}
	else if (t*v - an*t*t/2 <= x0)
	{
		cout<<"The car should stop(decelerate). It will not pass the crossroad ";
	}
	else
	{
		cout<<t*v<<" " << ap*t*t<<" "<< x0+dS <<"No solution is suggested. A clash or a fine is inevitable";
	}
	return 0;
}
*/

/* 
// Task 6. Repeat the project assuming two cars approaching the road intersection in the same direction.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	double v01, x0, t, dS, ap1, an1, v02, d, ap2, an2;
	
	cout<<"Initial speed of the first car"<<endl;
	cin>>v01;
	
	cout<<"Initial distance between the first car and the intersection"<<endl;
	cin>>x0;
	
	cout<<"Duration of the yellow light"<<endl;
	cin>>t;
	
	cout<<"Intersection width"<<endl;
	cin>>dS;
	
	cout<<"Magnitude of the constant positive acceleration of the first car "<<endl;
	cin>>ap1;
	
	cout<<"Magnitude of the constant negative acceleration of the first car "<<endl;
	cin>>an1;

	cout<<"Initial speed of the second car"<<endl;
	cin>>v02;
	
	cout<<"Initial distance between the second car and the first car"<<endl;
	cin>>d;
	
	cout<<"Magnitude of the constant positive acceleration of the second car "<<endl;
	cin>>ap2;
	
	cout<<"Magnitude of the constant negative acceleration of the second car "<<endl;
	cin>>an2;
	
	if(v01<20 || v01 >80 || x0<10 || x0>150 || t<2 || t>5 || dS < 5 || dS>20 || ap1 < 1 || ap1 > 3 || an1 < 1 || an1 > 3 || v02<20 || v02 >80 || d<10 || d>100 || ap2 < 1 || ap2 > 3 || an2 < 1 || an2 > 3)
	{
		cout<<"invalid input";
		return 0;
	}
	
	double v1 = v01*1000/3600;
	double v2 = v02*1000/3600;
	
	if(t*v1 >= x0+dS)
	{
		if(t*v2 >= d+x0+dS && t*v2 < t*v1 + d)
			cout<<"Both cars should not accelerate. They will pass the crossroad.";
		else if (t*v2 - an2*t*t/2 <= d+x0 && t*v2 - an2*t*t/2 < t*v1 + d)
			cout<<"The first car should not accelerate. It will pass the crossroad. The second car should stop(decelerate). It will not pass the crossroad.";
		else if  (t*v2 + ap2*t*t/2 >= d+x0+dS && t*v2 + ap2*t*t/2 < t*v1 + d )
			cout<<"The first car should not accelerate. It will pass the crossroad. The second car should accelerate. It will pass the crossroad. ";
		else
			cout<<"No solution is suggested. A clash or a fine is inevitable";
	}
	else if (t*v1 + ap1*t*t/2 >= x0+dS)
	{
		if(t*v2 >= d+x0+dS && t*v2 < t*v1 + ap1*t*t/2 + d)
			cout<<"The first car should accelerate. It will pass the crossroad. The second car should not accelerate. It will pass the crossroad.";
		else if (t*v2 - an2*t*t/2 <= d+x0 && t*v2 - an2*t*t/2 < t*v1 + ap1*t*t/2 + d)
			cout<<"The first car should accelerate. It will pass the crossroad. The second car should stop(decelerate). It will not pass the crossroad.";
		else if (t*v2 + ap2*t*t/2 >= d+x0+dS && t*v2 + ap2*t*t/2 < t*v1 + ap1*t*t/2 + d)
			cout<<"The first car should accelerate. It will pass the crossroad. The second car should accelerate. It will pass the crossroad. ";
		else
			cout<<"No solution is suggested. A clash or a fine is inevitable";
	}		
	else if (t*v1 - an1*t*t/2 <= x0)
	{
		if(t*v2 - an2*t*t/2 <= d+x0 && t*v2 - an2*t*t/2 < t*v1 - an1*t*t/2 + d)
			cout<<"Both cars should stop(decelerate). They will not pass the crossroad.";
		else 
			cout<<"No solution is suggested. A clash or a fine is inevitable";
	}
	return 0;
}
*/