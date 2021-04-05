#include <iostream>

bool checkFreq(float* arr, int count, int channel){
  if((channel < 0) || (channel >= count)){
    std::cerr << "Error there is no such channel!" << std::endl;
    return false;
  }else if(channel == 0){
    std::cout << "Radio receiver - OFF" << std::endl;
  }else{
    std::cout << "The radio receiver is switched to a channel " << channel << std::endl;
    std::cout << "Radio frequency " << arr[channel] << std::endl;
  }
}

int main(){
  std::cout << "Radio receiver" << std::endl;
  float settings[5];
  int channel = 0;
  std::cout << "Enter settings." << std::endl;
  for(int i = 1; i <= 5; i++){
    std::cout << i << " - ";
    std::cin >> settings[i];
  }

  std::cout << "Enter the channel" << std::endl;
  std::cin >> channel;
  checkFreq(settings, 5, channel);
  return 0;
}
// В радио-приёмнике настроено 10 частот-каналов, 
// представленные в виде массива. Каждая из настроек частоты это
// число с плавающей точкой. Настройка производится при 
// старте приёмника. Приёмник проигрывает текущий 
// настроенный канал, устанавливая текущую активную чистоту, 
// которая и показывается пользователю. 
// Требуется организовать безопасный доступ к каналам приёмника. 
// Если канал набираемый пользователем находится за 
// пределами массива каналов, приёмник не переключается и 
// выводит сообщение об ошибке. Если пользователь вводит 0, 
// приёмник отключается.