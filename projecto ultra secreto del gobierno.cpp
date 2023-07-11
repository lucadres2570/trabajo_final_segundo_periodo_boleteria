#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main(){
 
 system("COLOR A0");	
 system("mode con cols=85 lines=30");	
 int boletas, total_a_pagar=0, sectores, total_boletas_vendidas=0, estado_estadio=46692;

 
  while(estado_estadio>0){
  
  
     
  cout<<"*************************************************************************************"<<endl;   
  cout<<"*************************BIENVENIDO AL ESTADIO METROPOLITANO*************************"<<endl;
  cout<<"***********************************ROBERTO MELENDEZ**********************************"<<endl;
  cout<<"*************************************************************************************"<<endl;
  
  cout<<"\n            Primera fecha cuadrangulares semifinales Liga Aguila 1-2019"<<endl;
  cout<<"\n                          Junior vs. Atletico Nacional"<<endl;
  cout<<"\n                          Domingo 12 de Mayo - 7:00 PM"<<endl;
  
  cout<<"\n                                 Recomendaciones:"<<endl;
  cout<<"      1. Todo menor de edad paga su boleta."<<endl;
  cout<<"      2. Acate las normas de convivencia dentro y fuera del estadio."<<endl;
  cout<<"      3. Verifique que su boleta sea la original y no lo compre a revendedores."<<endl;
  
  cout<<"\n                          Sectores del estadio"<<endl;
  cout<<"\n                  1. Tribuna Norte alta y baja: 20000."<<endl;
  cout<<"\n                  2. Tribuna Sur alta y baja: 20000."<<endl;
  cout<<"\n                  3. Tribuna Oriental alta y baja: 40000."<<endl;
  cout<<"\n                  4. Tribuna Occidental alta: 60000."<<endl;
  cout<<"\n                  5. Tribuna Occidental laterales: 80000."<<endl;
  cout<<"\n                  6. Tribuna Occidental baja: 100000."<<endl;
  
  
  cout<<"\n                           Ingrese la tribuna. ";
  cin>>sectores;
  cout<<"\n                  Ingrese la cantidad de boletas que va a comprar";
  cin>>boletas;
	
  if(sectores==1 && boletas<=46692){
  	
  	total_a_pagar=20000*boletas;
  
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
  	
  	cout<<"\nEl sector de la tribuna seleccionado no existe."<<endl;
  	
  }else if(boletas>10){
      
      cout<<"\nEsa cantidad de boletas no esta permitido."<<endl;
      
  }
   
  

  cout<<"\nEl total a pagar por las boletas es de: "<<total_a_pagar;


  total_boletas_vendidas+=boletas;
  boletas=0;
  
  cout<<"\nel Total de boletas vendidas son: "<<total_boletas_vendidas<<endl;
  
  if(total_boletas_vendidas==46692){
  	
  	cout<<"\nEl estadio se encuentra en su maxima capacidad."<<endl;
  	estado_estadio-=total_boletas_vendidas;
  	
  }else{
  	
  	estado_estadio-=total_boletas_vendidas;
  	
  	cout<<"\nEl estadio no se encuentra en su maxima capacidad y faltan: "<<estado_estadio<<endl;
  	
  }
  
  getch();
  system("cls");

}

return 0;
}
