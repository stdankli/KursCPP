#include <iostream>
using namespace std;

enum month{
    january=1, february, march, april, may, june, july, august, september, october, november, december
};

void checkmonth(month input_month){
    if(input_month==january) cout<<"The current month is january. It's the "<<input_month<<". month.\n";
    else if(input_month==february) cout<<"The current month is february. It's the "<<input_month<<". month.\n";
    else if(input_month==march) cout<<"The current month is march. It's the "<<input_month<<". month.\n";
    else if(input_month==april) cout<<"The current month is april. It's the "<<input_month<<". month.\n";
    else if(input_month==may) cout<<"The current month is may. It's the "<<input_month<<". month.\n";
    else if(input_month==june) cout<<"The current month is june. It's the "<<input_month<<". month.\n";
    else if(input_month==july) cout<<"The current month is july. It's the "<<input_month<<". month.\n";
    else if(input_month==august) cout<<"The current month is august. It's the "<<input_month<<". month.\n";
    else if(input_month==september) cout<<"The current month is september. It's the "<<input_month<<". month.\n";
    else if(input_month==october) cout<<"The current month is october. It's the "<<input_month<<". month.\n";
    else if(input_month==november) cout<<"The current month is november. It's the "<<input_month<<". month.\n";
    else if(input_month==december) cout<<"The current month is december. It's the "<<input_month<<". month.\n";
}

int main(){
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
    return 0;
}