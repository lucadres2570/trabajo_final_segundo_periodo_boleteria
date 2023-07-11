#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

using namespace std;

int main(){
 	
 system("COLOR A0");	
 system("mode con cols=85 lines=30"); //85 no te olvides 	
	
 int boletas, total_a_pagar=0, sectores, total_boletas_vendidas=0, estado_estadio=45480;
 
 int max_norte = 9838, max_sur = 9877, max_oriental = 12425, max_occi_alta = 8518, max_occi_baja = 4822;
 
 int bol_norte, bol_sur, bol_oriental, bol_occi_alta, bol_occi_baja;
 
 while(estado_estadio>0){
  
     
  cout<<"***************************************************************************"<<endl;   
  cout<<"********************BIENVENIDO AL ESTADIO METROPOLITANO********************"<<endl;
  cout<<"******************************ROBERTO MELENDEZ*****************************"<<endl;
  cout<<"***************************************************************************"<<endl;
  
  cout<<"Recomendaciones:"<<endl;
  cout<<"1. Todo niño paga su boleta."<<endl;
  cout<<"2. Acate las normas de convivencia dentro y fuera del estadio."<<endl;
  cout<<"3. Verifique que su boleta sea la original y no lo compre a revendedores."<<endl;
  
  
  cout<<"\n                          Sectores del estadio"<<endl;
  cout<<"\n                  1. Tribuna Norte alta y baja: 20000."<<endl; //maximo tribuna 9.838
  cout<<"\n                  2. Tribuna Sur alta y baja: 20000."<<endl; //maximo tribuna 9.877
  cout<<"\n                  3. Tribuna Oriental alta y baja: 40000."<<endl;//maximo tribuna 12.425
  cout<<"\n                  4. Tribuna Occidental alta: 70000."<<endl;//maximo tribuna 8.518
  cout<<"\n                  5. Tribuna Occidental baja: 100000."<<endl;//maximo tribuna 4.822
  
  
  cout<<"\n                    ¿En que sector quiere sus acientos? ";
  cin>>sectores;
  
  
  switch(sectores){
  	case 1:
  		cout<<"\n                  ¿Cuantos boletas desea en esta tribuna? ";
  		cin>>bol_norte;
  		max_norte-=bol_norte;
  		boletas+=bol_norte;
  		

  		if(boletas<=45480 && max_norte>-1){
  	
  	       total_a_pagar=20000*bol_norte;
  
        }
        bol_norte=0;
  	break;	
  	
  	case 2:
  		cout<<"\n                  ¿Cuantos boletas desea en esta tribuna? ";
  		cin>>bol_sur;
  		max_sur-=bol_sur;
  		boletas+=bol_sur;
  		
  		if(boletas<=10 && max_sur>=1){
  	
  	      	total_a_pagar=20000*boletas;
  	
          }
  		
  	break;
  	
  	case 3:
  		cout<<"\n                  ¿Cuantos boletas desea en esta tribuna? ";
  		cin>>bol_oriental;
  		max_oriental-=bol_oriental;
  		boletas+=bol_oriental;
  		
  		if(boletas<=10 && max_oriental>=1){
  	
  			total_a_pagar=40000*boletas;
  	
  		  }
  		
  	break;
  	
  	case 4:
  		cout<<"\n                  ¿Cuantos boletas desea en esta tribuna? ";
  		cin>>bol_occi_alta;
  		max_occi_alta-=bol_occi_alta;
  		boletas+=bol_occi_alta;
  		
  		if(boletas<=10 && max_occi_alta>=1){
  	
  			total_a_pagar=70000*boletas;
  	
          }
  		
  	break;
  	
  	case 5:
  		cout<<"\n                  ¿Cuantos boletas desea en esta tribuna? ";
  		cin>>bol_occi_baja;
  		max_occi_baja-=bol_occi_baja;
  		boletas+=bol_occi_baja;
  		
  		if(boletas<=10 && max_occi_baja>=1){
  	
  			total_a_pagar=100000*boletas;
  	
          }
  		
  	break;
  	
  	default:
  	    cout<<"El sector de la tribuna seleccionado no existe."<<endl;
  	    boletas=0;
  }
 

    if(boletas>45480){
      
      cout<<"Ese numero de boletas no esta permitido."<<endl;
      boletas=0;
      
  }else if(max_norte<0 || max_sur<0 || max_oriental<0 || max_occi_alta<0 || max_occi_baja<0){
  	
  	cout<<"La tribuna seleccionada ya se encuentra en su maxima capacidad."<<endl;
  	boletas=0;
  	
  }
   

  cout<<"El total a pagar por las boletas es de: "<<total_a_pagar;


  total_boletas_vendidas+=boletas;
  boletas=0;
  
  cout<<"\nel total de boletas vendidas son: "<<total_boletas_vendidas<<endl;
  
  
  if(total_boletas_vendidas==45480){
  	
  	cout<<"\nel estadio se encuentra en su maxima capacidad."<<endl;
  	estado_estadio-=total_boletas_vendidas;
  	
  }else{
  	
  	estado_estadio-=total_boletas_vendidas;
  	
  	cout<<"\nel estadio no se encuentra en su maxima capacidad y faltan "<<estado_estadio<<" boletas."<<endl;
  	
  }
  
  getch();
  system("cls");
}

return 0;
}
