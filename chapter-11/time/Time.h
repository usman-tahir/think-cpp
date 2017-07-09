
struct Time {
  
  // instance variables
  int hour, minute;
  double second;

  // constructors
  Time (int hour, int min, double seconds);
  Time (double seconds);

  // modifiers
  void incrememnt(double seconds);

  // functions
  void print() const;
  bool after(const Time &time2) const;
  Time add(const Time &time2) const;
  double convertToSeconds() const;

};
