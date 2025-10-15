// Performs ZadEnumExample (1.0)

#include "Zad1Kcpp.h"
#include <iostream>

enum month{
    january=1, february, march, april, may, june, july, august, september, october, november, december
};

void checkmonth(month input_month){
    if(input_month==january) std::cout<<"The current month is january. It's the "<<input_month<<". month.\n";
    else if(input_month==february) std::cout<<"The current month is february. It's the "<<input_month<<". month.\n";
    else if(input_month==march) std::cout<<"The current month is march. It's the "<<input_month<<". month.\n";
    else if(input_month==april) std::cout<<"The current month is april. It's the "<<input_month<<". month.\n";
    else if(input_month==may) std::cout<<"The current month is may. It's the "<<input_month<<". month.\n";
    else if(input_month==june) std::cout<<"The current month is june. It's the "<<input_month<<". month.\n";
    else if(input_month==july) std::cout<<"The current month is july. It's the "<<input_month<<". month.\n";
    else if(input_month==august) std::cout<<"The current month is august. It's the "<<input_month<<". month.\n";
    else if(input_month==september) std::cout<<"The current month is september. It's the "<<input_month<<". month.\n";
    else if(input_month==october) std::cout<<"The current month is october. It's the "<<input_month<<". month.\n";
    else if(input_month==november) std::cout<<"The current month is november. It's the "<<input_month<<". month.\n";
    else if(input_month==december) std::cout<<"The current month is december. It's the "<<input_month<<". month.\n";
}

void Zad1Kcpp::runTask() {
    month current_month = january;
    checkmonth(current_month);
    current_month = february;
    checkmonth(current_month);
    current_month = april;
    checkmonth(current_month);
    current_month = august;
    checkmonth(current_month);
    current_month = december;
    checkmonth(current_month);
}