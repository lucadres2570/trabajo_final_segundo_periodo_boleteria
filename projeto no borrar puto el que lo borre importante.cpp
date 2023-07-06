#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
 int boletas, total_a_pagar=0, sectores, total_boletas_vendidas=0, estado_estadio, pregunta2=0;
 bool pregunta;
 
  for(int i= 0; i<=46692; i++){
  
  
     
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
  
  
  cout<<"¿Desea comprar boletas? 1.si 2.no"<<endl;
  cin>>pregunta2; 
  
while(pregunta2!=1 && pregunta2==2){
	
  cout<<"\n                    ¿En que sector quiere sus acientos? ";
  cin>>sectores;
  cout<<"\n                  ¿Cuantos boletas desea en esta tribuna? ";
  cin>>boletas;
	
  if(sectores==1){
  	
  	total_a_pagar=20000*boletas;
  	cout<<"hola";
  
  }else if(sectores==2){
  	
  	total_a_pagar=20000*boletas;
  	
  }else if(sectores==3){
  	
  	total_a_pagar=40000*boletas;
  	
  }else if(sectores==4){
  	
  	total_a_pagar=60000*boletas;
  	
  }else if(sectores==5){
  	
  	total_a_pagar=80000*boletas;
  	
  }else if(sectores==6){
  	
  	total_a_pagar=100000*boletas;
  	
  }else if(sectores!=1 && sectores!=2 && sectores!=3 && sectores!=4 && sectores!=5 && sectores!=6){
  	
  	cout<<"El sector de la tribuna seleccionado no existe."<<endl;
  	
  }
  
  cout<<"¿Desea comprar otras boletas en otra tribuna? 1.si 2.no"<<endl;
  cin>>pregunta2; 

 cout<<"El total a pagar por las boletas es de: "<<total_a_pagar;
  
  }



  total_boletas_vendidas=+boletas;
  boletas=0;
  
  cout<<"\nel total de boletas vendidas son: "<<total_boletas_vendidas<<endl;
  
  if(total_boletas_vendidas==46692){
  	
  	cout<<"\nel estadio se encuentra en su maxima capacidad."<<endl;
  	
  	
  }else{
  	
  	estado_estadio=46692-total_boletas_vendidas;
  	
  	cout<<"\nel estadio no se encuentra en su maxima capacidad y faltan: "<<estado_estadio<<endl;
  	
  }
  
  cout<<"¿El estadio se encuentra en su maxima capacidad? 1.si 2.no"<<endl;
  cin>>pregunta;
  
  if(pregunta==1){
  
  i=99999;
  
  }

}

}

