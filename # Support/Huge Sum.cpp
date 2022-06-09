string huge_sum(string s1, string s2) {
    int size1 = s1.size(), size2 = s2.size();

    // Making the two numbers equal in size by adding zeros to the smaller number //
    if(size1 > size2) {
        string zeros;
        for(int i{}; i < size1-size2; i++) zeros += "0";
        s2 = zeros + s2;
    }
    else if(size1 < size2) {
        string zeros;
        for(int i{}; i < size2-size1; i++) zeros += "0";
        s1 = zeros + s1;
    }

    // Summing each digit from the both numbers //
    string sum{}; int carry{};
    for(int i= s1.size()-1; i>=0; i--) {
        int dig_sum {carry + (s1[i] - 48) + (s2[i] - 48)};
        sum += to_string(dig_sum%10);
        carry = dig_sum / 10;
    }
    if(carry) sum += "1";
    reverse(sum.begin(),sum.end());
    return sum;
}
