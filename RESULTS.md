# Lottery Scheduling Results

## Setup
Created 3 child processes with tickets:
P1 = 1
P2 = 5
P3 = 10

## Workload
Each process ran a CPU-bound loop incrementing a counter.

## Observed Shares
P1 ≈ 6%
P2 ≈ 30%
P3 ≈ 64%

## Notes
Results converge toward expected ratios as runtime increases.
Variance decreases with longer runs due to probabilistic fairness.

