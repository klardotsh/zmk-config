// Modified from
// https://github.com/wannabecoffeenerd/zmk/blob/5f348932a3dfbfd1890920b9653ad0dde848a1cd/app/boards/shields/hillside_view/hillside_view.dtsi
//
// | LT4  | LT3  | LT2  | LT1  | LT0  |                                 | RT0  | RT1  | RT2  | RT3  | RT4  |
// | LM4  | LM3  | LM2  | LM1  | LM0  |                                 | RM0  | RM1  | RM2  | RM3  | RM4  |
// | LB4  | LB3  | LB2  | LB1  | LB0  |                                 | RB0  | RB1  | RB2  | RB3  | RB4  |
//                                    | LH4  |                   | RH4  |
//                      | LH3  | LH2  | LH1  | LH0  |     | RH0  | RH1  | RH2  | RH3  |

#define LT0  5  // left-top row
#define LT1  4
#define LT2  3
#define LT3  2
#define LT4  1
// LT5 chopped off in 5x3 configuration

#define RT0  6  // right-top row
#define RT1  7
#define RT2  8
#define RT3  9
#define RT4  10
// RT5 chopped off in 5x3 configuration

#define LM0 17  // left-middle row
#define LM1 16
#define LM2 15
#define LM3 14
#define LM4 13
// LM5 chopped off in 5x3 configuration

#define RM0 18  // right-middle row
#define RM1 19
#define RM2 20
#define RM3 21
#define RM4 22
// RM5 chopped off in 5x3 configuration

#define LB0 29  // left-bottom row
#define LB1 28
#define LB2 27
#define LB3 26
#define LB4 25
// LB5 chopped off in 5x3 configuration

#define RB0 30  // right-bottom row
#define RB1 31
#define RB2 32
#define RB3 33
#define RB4 34
// RB5 chopped off in 5x3 configuration

#define LH0 41  // left thumb keys
#define LH1 40
#define LH2 39
#define LH3 38
#define LH4 36

#define RH0 42  // right thumb keys
#define RH1 43
#define RH2 44
#define RH3 45
#define RH4 37
