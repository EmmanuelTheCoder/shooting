# Bitcoin Stock-to-flow model and why it is bad.

## Introducing Stock-to-Flow

The stock-to-flow model (SF), popularized by a pseudonymous Dutch institution investor who operates under the Twitter account "PlanB" (@100trillionUSD) is the leading Bitcoin valuation model for Bitcoin proponents.

In PlanB's paper published on medium "Modeling Bitcoin Value with Scarcity" states that because of their unforgeable costliness, certain precious metal have maintained a monetary role throughout history. Siting gold as an example of a precious metal whose value is both because new supply (gold flow) is insignificant to the current supply (stock) and because of the impossibility of replicating the stores of gold around the world. PlanB then argues that the same logic holds true for Bitcoin, as new supply is reduced every four years, it becomes more valuable, eventually culminating in a supply of 21 million Bitcoin.

Scarcity is defined according to PlanB as a "low rate of supply" (i.e low rate of supply = scarcity) and can be quantified using a metric called Stock-to-Flow (SF) which is the ratio between the current supply and new supply and is given mathematically as:

**Current supply/New supply = Stock/Flow**

Stock is the size of existing stockpiles or reserves. Flow is the yearly production. Instead of SF, people also use supply growth rate (flow/stock). Note that SF= 1/supply growth rate.


It is this premise that translated into the hypothesis "...that scarcity, as measured by SF, directly drives value". PlanB then plots Bitcoin's SF against USD market cap as well as two arbitrarily chosen SF data points for Gold and Silver. 

ln (USD market capitalization) = 3.3 * ln(SF) + 14.6

The above equation was derived when PlanB ran a linear regression using the natural logarithm of Bitcoin's SF metric as the independent variable and the USD market cap as the dependent variable.
The conclusion from PlanB's paper is that there is a statistically significant relationship between USD market cap and SF values as evident in the resulting R2 of ~0.95 from the linear regression.
**This model suggests that an investor can forecast the future USD market cap of bitcoin via the above formula.**


## SF, A Deficient and Spurious Model

The stock-to-flow (SF) model has several deficiences both in its empirical foundation and theoretical preposition.

From the theoretical foundation, the model is based on rather strong asserveration that the USD market cap of a monetary good (e.g gold and silver) is derived directly from their rate of new supply. Other than the singular data points selected to chart gold and silver's market cap against Bitcoin's trajectory, there is no thorough evidence or proven research provided to support this idea.

Good statistical results such as a high R-square do not constitute a meaningful finding. So, PlanB's naive application of a linear regression has a very high probability of getting spurious results.
Researchers understimate how often such technique lead to a spurious result and any model built on a spurious result is in itself a spurious model and not worthy of acceptance. Particularly in this situation where there is a large degree of freedom in which a lot of random data can be fit to a specific outcome.

**Now lets look into each building block of the model and find out its spuriosity.**

### Gold and the dollar

Theoretically, PlanB's definition of "scarcity" is not what scarcity truly is. PlanB uses "scarcity" to describe an asset's supply growth rate or new production as measured by the stock-to-flow (SF) metric. This description assumes that increasing new supply depresses price through increased selling pressure from producers and vice versa.

This seems agreeable at first glance until one considers that high SF represents a system where new supply is insignificant to the current supply.
PlanB quotes from Saifedeen Ammous'_Bitcoin standard_ "For gold, a price spike that causes a doubling of annual production will be insignificant, increasing stockpiles by 3% rather than 1.5%"

Looking at it from this point, one will understand that SF has no direct relationship with gold's value over the last 115 years.
Gold's market cap held valuation between ~$60B to ~$9T, all at the same SF value of 60. This brings itself to an obvious conclusion that other factors drive gold's USD valuation.

Understand that the ratio of purchasing power between gold and the USD:

Gold/USD = Purchasing Power of Gold / Purchasing Power of USD

When the purchasing power of the dollar decreases, the value of gold/USD increases and vice versa. But over the last 115 years, the variability in gold's value can be explained by the substantial decrease in the purchasing power of the USD with $1 in 1915 now worth just $0.04

While a higher SF value may be a necessary feature for a commodity to serve as "hard money", the metric itself says nothing about how market participants value set commodity. Many cryptocurrencies which utilize Bitcoin's code have the exact same supply schedule as Bitcoin and everyone understands their SF value have nothing to do with their future (or current) valuation.
**It shows that PlanB's SF hypothesis applies to no economic assets except Bitcoin and whose only evidence is a linear regression with questionable application and clear selection bias.**

### $235B Bitcoin to infinity

By 2045, the model (i.e SF model) estimates each Bitcoin will be worth $235,000,000,000 before eventually converging to infinity as Bitcoin's flow approaches 0. However, this and several other implementation errors well established in the research community demonstrates why SF model is likely to be spurious hence bad.

The model supplied a slope-intercept equation y=mx + b. An ordinary-least-squares (OLS) regression is not a predictive model but rather an estimation of the m and b values that minizes the difference between the actual y values and the estimated y values given by the mx+b equation.

Utilizing the estimated slope-intercept formula is making most naive prediction possible because Bitcoin grew by X in the past it will grow by X in the future. One should remember that past results are not representative of future returns.


### Conclusion

Quoting from Darrel Huff's _How to lie with statistics_ "Many a statistic is false on its face. It gets by only because the magic of numbers bring about a suspension of common sense".
One will understand after reflecting deeply that the idea that gold's USD price is a function of its own supply rate and so is Bitcoin's should not be taken seriously.

**Investors should be highly skeptical of this model. The stock-to-flow model is not proper emperical analysis but more of a marketing piece in which the author is trying to convince readers of Bitcoin's promising future of dominating. This may or may not turn out true, but it has little to do with with Bitcoin's supply schedule.**