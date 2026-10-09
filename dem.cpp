#include <iostream>
#include <sstream>
#include <vector>
#include <bitset>

using namespace std;

// Convert IP string to integer vector
vector<int> parseIP(const string& ip) {
    vector<int> parts;
    stringstream ss(ip);
    string token;
    while (getline(ss, token, '.')) {
        parts.push_back(stoi(token));
    }
    return parts;
}

// Convert vector to IP string
string toIPString(const vector<int>& ip) {
    stringstream ss;
    for (int i = 0; i < 4; i++) {
        ss << ip[i];
        if (i != 3) ss << ".";
    }
    return ss.str();
}

// Bitwise AND between two IPs
vector<int> andIP(const vector<int>& a, const vector<int>& b) {
    vector<int> result(4);
    for (int i = 0; i < 4; i++) {
        result[i] = a[i] & b[i];
    }
    return result;
}

// Bitwise OR between IP and NOT mask
vector<int> broadcastAddress(const vector<int>& network, const vector<int>& mask) {
    vector<int> result(4);
    for (int i = 0; i < 4; i++) {
        result[i] = network[i] | (~mask[i] & 255);
    }
    return result;
}

// Get IP class based on first octet
char getClass(int firstOctet) {
    if (firstOctet >= 0 && firstOctet <= 127) return 'A';
    if (firstOctet >= 128 && firstOctet <= 191) return 'B';
    if (firstOctet >= 192 && firstOctet <= 223) return 'C';
    if (firstOctet >= 224 && firstOctet <= 239) return 'D';
    return 'E';
}

int main() {
    string ipStr, netMaskStr, subnetMaskStr;

    cout << "Enter IP Address: ";
    cin >> ipStr;

    cout << "Enter Network Mask: ";
    cin >> netMaskStr;

    cout << "Enter Subnet Mask: ";
    cin >> subnetMaskStr;

    vector<int> ip = parseIP(ipStr);
    vector<int> netMask = parseIP(netMaskStr);
    vector<int> subnetMask = parseIP(subnetMaskStr);

    vector<int> networkID = andIP(ip, netMask);
    vector<int> subnetID = andIP(ip, subnetMask);
    vector<int> hostID(4);

    for (int i = 0; i < 4; i++) {
        hostID[i] = ip[i] & (~netMask[i] & 255);
    }

    vector<int> netAddress = subnetID;
    vector<int> broadAddress = broadcastAddress(subnetID, subnetMask);

    cout << "\nClass: " << getClass(ip[0]) << endl;
    cout << "Network ID: " << toIPString(networkID) << endl;
    cout << "Host ID: " << toIPString(hostID) << endl;
    cout << "Subnet ID: " << toIPString(subnetID) << endl;
    cout << "Network Address: " << toIPString(netAddress) << endl;
    cout << "Broadcast Address: " << toIPString(broadAddress) << endl;

    return 0;
}
