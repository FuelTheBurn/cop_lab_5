# This is a sample Python script.

# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.
import time
from stringdata import get_data
def linear_search(container,element):
    for i in range(len(container)):
        if container[i]==element:
            return i
    return -1

def binary_search(container,element):
    #nonstanard implementation but helps eliminate off by 1 errors
    power=1
    power_counter=1
    while(power<len(container)):
        power*=2
        power_counter+=1
    ans=0
    for i in range(power_counter,-1,-1):
        if ans+(1<<i)<len(container) and container[ans+(1<<i)]<=element:
            ans+=(1<<i)
    #print(ans)
    #print(container[ans])
    if container[ans]==element:
        return ans
    else:
        return -1

# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    data=get_data()
    string = "not_here"
    start_time=time.time()
    print("linear search, string",string,"found at",linear_search(data,string))
    end_time = time.time()
    print(f'Took {end_time - start_time:.15f} seconds')
    start_time = time.time()
    print("binary search, string", string, "found at", binary_search(data, string))
    end_time = time.time()
    print(f'Took {end_time - start_time:.15f} seconds')
    string = "mzzzz"
    start_time=time.time()
    print("linear search, string",string,"found at",linear_search(data,string))
    end_time = time.time()
    print(f'Took {end_time - start_time:.15f} seconds')
    start_time = time.time()
    print("binary search, string", string, "found at", binary_search(data, string))
    end_time = time.time()
    print(f'Took {end_time - start_time:.15f} seconds')
    string = "aaaaa"
    start_time=time.time()
    print("linear search, string",string,"found at",linear_search(data,string))
    end_time = time.time()
    print(f'Took {end_time - start_time:.15f} seconds')
    start_time = time.time()
    print("binary search, string", string, "found at", binary_search(data, string))
    end_time = time.time()
    print(f'Took {end_time - start_time:.15f} seconds')


# See PyCharm help at https://www.jetbrains.com/help/pycharm/
