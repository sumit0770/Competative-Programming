class BusBooking {
    unordered_map<string, int> bookings;  
    int total = 0;

public:
    BusBooking(int n) {}

    void toggle(string seat) {
        if (auto it = bookings.find(seat); it != bookings.end()) {
            total -= it->second;  
            bookings.erase(it);
            return;
        }
        string middle = (seat[0] == 'A' ? "B" : seat[0] == 'D' ? "C" : "") + seat.substr(1);  
        bookings[seat] = bookings.contains(middle) ? 3 : 1;
        total += bookings[seat];
    }

    int getTotalTime() { return total; }

    int getMinTime() { return bookings.size(); } 
};