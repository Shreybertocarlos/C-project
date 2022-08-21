#include <stdio.h>

int main() {
  char Category;
  int tempChoice;
  int currencyChoice;
  int massChoice;
  int userinputF; 
  int userinputC;
  int userinputUSDtoEuro; 
  int userinputUSDtoJPY; 
  int userinputUSDtoRMB; 
  int userinputOunce; 
  int userinputGram; 
  int fahrenheitToCelsius; 
  int celsiusToFahrenheit; 
  float USDtoEURO ; 
  float USDtoJPY; 
  float USDtoRMB; 
  float ounceToPounds; 
  float gramsToPounds; 
  
  printf("Hello,Welcome to Unit Converter! \n");
  printf("Here is a list of conversation to choose from: \n");
  printf("Temperature(T),Currency(C),Mass(M) \n");
  printf("Please enter the letter you want to convert.\n");
  scanf("%c",&Category);
  
  if(Category == 'T'){
      printf("Hello,Welcome to Temperature Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      scanf("%d",&tempChoice);
      if(tempChoice == 1){
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&userinputF);
          fahrenheitToCelsius =  ((userinputF-32) * (5.0/9.0));
          printf("Celsius: %d",fahrenheitToCelsius);
      }
      else if(tempChoice == 2){
        printf("Please enter the Celsius degree: \n");
        scanf("%d",&userinputC);
        celsiusToFahrenheit = ((9.0/5.0)*userinputC + 32);
        printf("Fahrenheit: %d",celsiusToFahrenheit);
      }
      else
        printf("Please enter the correct choice. \n");
  }
  
  else if(Category == 'C') {
      printf("Hello,Welcome to Currency Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for USD to Euro. \n");
      printf("Enter 2 for USD to JPY. \n");
      printf("Enter 3 for USD to RMB. \n");
      scanf("%d",&currencyChoice);
      if(currencyChoice == 1){
          printf("Please enter the USD amount: \n");
          scanf("%d",&userinputUSDtoEuro);
          USDtoEURO = userinputUSDtoEuro * 0.87;
          printf("Euro: %.2f",USDtoEURO); 
      }
      else if(currencyChoice == 2){
          printf("Please enter the USD amount: \n");
          scanf("%d",&userinputUSDtoJPY);
          USDtoJPY = userinputUSDtoJPY * 111.09;
          printf("JPY: %.2f",USDtoJPY);
      }
      else if(currencyChoice == 3) {
        printf("Please enter the USD amount: \n");
        scanf("%d",&userinputUSDtoRMB);
        USDtoRMB = userinputUSDtoRMB * 6.82;
        printf("RMB: %.2f",USDtoRMB);
      }
      else
        printf("Please enter correct choice. \n");
   }
  else if(Category == 'M'){
      printf("Hello,Welcome to Mass Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for ounces to pounds. \n");
      printf("Enter 2 for gram to pounds. \n");
      scanf("%d",&massChoice);
      if(massChoice == 1){
          printf("Please enter the ounce amount: \n");
          scanf("%d",&userinputOunce);
          ounceToPounds = userinputOunce * 0.0625;
          printf("Pounds: %.2f",ounceToPounds);
      }
      else if(massChoice == 2) {
          printf("Please enter the gram amount: \n");
          scanf("%d",&userinputGram);
          gramsToPounds = userinputGram * 0.00220462;
          printf("Pounds: %.2f",gramsToPounds);
      }
      else 
        printf("Please enter the correct choice. \n");
   }
  return 0;
}
