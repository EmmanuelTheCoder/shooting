
C = StN(d1) - Ke^-rt N(d2)

where:
C = call option of price = ?
S = current stock  = $40
k = strike price = $45
r = risk free intrest-rate = 3%/year = 3/100 = 0.03
t = time to maturity = 4months = 4/12 = 1/3
N = a normal distribution = Φ
σ = 40% = 40/100 = 0.4
μ = 7%

solving for d1

d1 = ln St/k + (r + σ^2/2)t
     ____________________
      σs √t

d1 = ln (40/45) + (0.03 + 0.4^2/2)1/3
     ____________________
      0.4 √1/3

d1 = ln (0.8889) + (0.03 + 0.08) 0.3333
     ____________________
      0.4 √0.3333

d1 = -0.1178 + 0.0367
      _______________
      0.2309

d1 = -0.3512


solving for d2

d2 = d1 -  σ√t

d2 = -0.3512 - 0.4√0.3333
d2 = -0.3512 - 0.2309
d2 = -0.5821


finding the normal distribution

N(d1) = Φ(d1) = Φ (-0.3512) = 0.3627

N(d2) = Φ(d2) = Φ(-0.5821) = 0.2803


Finding the Black Scholes

C = StN(d1) - Ke^-rt N(d2)

C = 40 * 0.3627 - (45 * exp(-0.03 * 1/3) * 0.2803)

C = 14.5080 - (45 * exp(-0.03 * 0.3333) * 0.2803)

C = 14.5080 - (45 * exp(-0.01) * 0.2803)

C = 14.5080 - (45 * 0.9901 * 0.2803)

C = 14.5080 -12.4886

C = 2.0194






