#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

using namespace std;

int main(){
 	
 system("COLOR A0");	
 system("mode con cols=85 lines=30"); //85 no te olvides 	
	
 int boletas=0, total_a_pagar=0, sectores, total_boletas_vendidas=0, estado_estadio=45480;
 
 int max_norte = 9838, max_sur = 9877, max_oriental = 12425, max_occi_alta = 8518, max_occi_baja = 4822;
 
 
 
 while(estado_estadio>0){
  
     
  cout<<"*************************************************************************************"<<endl;   
  cout<<"*************************BIENVENIDO AL ESTADIO METROPOLITANO*************************"<<endl;
  cout<<"***********************************ROBERTO MELENDEZ**********************************"<<endl;
  cout<<"*************************************************************************************"<<endl;
  
  cout<<"                                 Recomendaciones:"<<endl;
  cout<<"      1. Todo menor de edad paga su boleta."<<endl;
  cout<<"      2. Acate las normas de convivencia dentro y fuera del estadio."<<endl;
  cout<<"      3. Verifique que su boleta sea la original y no lo compre a revendedores."<<endl;
  
  
  cout<<"\n                          Sectores del estadio"<<endl;
  cout<<"\n                  1. Tribuna Norte alta y baja: 20000."<<endl; //maximo tribuna 9.838
  cout<<"\n                  2. Tribuna Sur alta y baja: 20000."<<endl; //maximo tribuna 9.877
  cout<<"\n                  3. Tribuna Oriental alta y baja: 40000."<<endl;//maximo tribuna 12.425
  cout<<"\n                  4. Tribuna Occidental alta: 70000."<<endl;//maximo tribuna 8.518
  cout<<"\n                  5. Tribuna Occidental baja: 100000."<<endl;//maximo tribuna 4.822
  
  
  cout<<"\n                          Ingrese la tribuna.";
  cin>>sectores;
  
  
  switch(sectores){
  	case 1:
  		cout<<"\n          Ingrese la cantidad de boletas que va a comprar";
  		cin>>boletas;
  		

  		if(boletas<=max_norte && boletas<=10){
  			
    	       total_a_pagar=20000*boletas;
    	       cout<<"\nEl total a pagar por las boletas es de: "<<total_a_pagar;
    	       max_norte-=boletas;
    	       
        }else{
        	
        	cout<<"\nLa tribuna seleccionada ya se encuentra en su maxima capacidad."<<endl;
        	boletas=0;
        }

    
  	break;	
  	
  	case 2:
  		cout<<"\n          Ingrese la cantidad de boletas que va a comprar";
  		cin>>boletas;
  		

  		if(boletas<=max_sur && boletas<=10){
  			
    	       total_a_pagar=20000*boletas;
    	       cout<<"\nEl total a pagar por las boletas es de: "<<total_a_pagar;
    	       max_sur-=boletas;
    	       
        }else{
        	
        	cout<<"\nLa tribuna seleccionada ya se encuentra en su maxima capacidad."<<endl;
        	boletas=0;
        }

    
  	break;
  	
  	case 3:
  		cout<<"\n          Ingrese la cantidad de boletas que va a comprar";
  		cin>>boletas;
  		

  		if(boletas<=max_oriental && boletas<=10){
  			
    	       total_a_pagar=40000*boletas;
    	       cout<<"\nEl total a pagar por las boletas es de: "<<total_a_pagar;
    	       max_oriental-=boletas;
    	       
        }else{
        	
        	cout<<"\nLa tribuna seleccionada ya se encuentra en su maxima capacidad."<<endl;
        	boletas=0;
        }

    
  	break;
  	
  	case 4:
  		cout<<"\n          Ingrese la cantidad de boletas que va a comprar";
  		cin>>boletas;
  		

  		if(boletas<=max_occi_alta && boletas<=10){
  			
    	       total_a_pagar=70000*boletas;
    	       cout<<"\nEl total a pagar por las boletas es de: "<<total_a_pagar;
    	       max_occi_alta-=boletas;
    	       
        }else{
        	
        	cout<<"\nLa tribuna seleccionada ya se encuentra en su maxima capacidad."<<endl;
        	boletas=0;
        }

    
  	break;
  	
  	case 5:
  		cout<<"\n          Ingrese la cantidad de boletas que va a comprar";
  		cin>>boletas;
  		

  		if(boletas<=max_occi_baja && boletas<=10){
  			
    	       total_a_pagar=100000*boletas;
    	       cout<<"\nEl total a pagar por las boletas es de: "<<total_a_pagar;
    	       max_occi_baja-=boletas;
    	       
        }else{
        	
        	cout<<"\nLa tribuna seleccionada ya se encuentra en su maxima capacidad."<<endl;
        	boletas=0;
        }

    
  	break;
  	
  	default:
  	    cout<<"\nEl sector de la tribuna seleccionado no existe."<<endl;
  	    boletas=0;
  }
 

    if(boletas>10){
      
      cout<<"\nEse cantidad de boletas no esta permitido."<<endl;
      boletas=0;
      
  }
   
   total_boletas_vendidas+=boletas;
   boletas=0;
  
  cout<<"\nel total de boletas vendidas son: "<<total_boletas_vendidas<<endl;
  
  
  if(total_boletas_vendidas==45480){
  	
  	cout<<"\nel estadio se encuentra en su maxima capacidad."<<endl;
  	estado_estadio-=total_boletas_vendidas;
  	
  }
  
  if(total_boletas_vendidas!=45480){
  	
  	
  	estado_estadio-=total_boletas_vendidas;
  	
  	cout<<"\nel estadio no se encuentra en su maxima capacidad y faltan "<<estado_estadio<<" boletas."<<endl;
  	
  }
  
  getch();
  system("cls");
}

return 0;
}
