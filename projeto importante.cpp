#include<iostream>

using namespace std;

int main(){
	
 int boletas, total_a_pagar=0, sectores, total_boletas_vendidas=0, estado_estadio=46692;

 
  while(estado_estadio>0){
  
  
     
  cout<<"***************************************************************************"<<endl;   
  cout<<"********************BIENVENIDO AL ESTADIO METROPOLITANO********************"<<endl;
  cout<<"***************************************************************************"<<endl;
  cout<<"\n                          Sectores del estadio"<<endl;
  cout<<"\n                  1. Tribuna Norte alta y baja: 20000."<<endl;
  cout<<"\n                  2. Tribuna Sur alta y baja: 20000."<<endl;
  cout<<"\n                  3. Tribuna Oriental alta y baja: 40000."<<endl;
  cout<<"\n                  4. Tribuna Occidental alta: 60000."<<endl;
  cout<<"\n                  5. Tribuna Occidental laterales: 80000."<<endl;
  cout<<"\n                  6. Tribuna Occidental baja: 100000."<<endl;
  
  
  
	
  cout<<"\n                    ¿En que sector quiere sus acientos? ";
  cin>>sectores;
  cout<<"\n                  ¿Cuantos boletas desea en esta tribuna? ";
  cin>>boletas;
	
  if(sectores==1 && boletas<=46692){
  	
  	total_a_pagar=20000*boletas;
  	cout<<"hola";
  
  }else if(sectores==2 && boletas<=10){
  	
  	total_a_pagar=20000*boletas;
  	
  }else if(sectores==3 && boletas<=10){
  	
  	total_a_pagar=40000*boletas;
  	
  }else if(sectores==4 && boletas<=10){
  	
  	total_a_pagar=60000*boletas;
  	
  }else if(sectores==5 && boletas<=10){
  	
  	total_a_pagar=80000*boletas;
  	
  }else if(sectores==6 && boletas<=10){
  	
  	total_a_pagar=100000*boletas;
  	
  }else if(sectores!=1 && sectores!=2 && sectores!=3 && sectores!=4 && sectores!=5 && sectores!=6){
  	
  	cout<<"El sector de la tribuna seleccionado no existe."<<endl;
  	
  }else if(boletas>10){
      
      cout<<"Ese numero de boletas no esta permitido."<<endl;
      
  }
   
  

  cout<<"El total a pagar por las boletas es de: "<<total_a_pagar;


  total_boletas_vendidas+=boletas;
  boletas=0;
  
  cout<<"\nel total de boletas vendidas son: "<<total_boletas_vendidas<<endl;
  
  if(total_boletas_vendidas==46692){
  	
  	cout<<"\nel estadio se encuentra en su maxima capacidad."<<endl;
  	estado_estadio-=total_boletas_vendidas;
  	
  }else{
  	
  	estado_estadio-=total_boletas_vendidas;
  	
  	cout<<"\nel estadio no se encuentra en su maxima capacidad y faltan: "<<estado_estadio<<endl;
  	
  }
  

}

}
