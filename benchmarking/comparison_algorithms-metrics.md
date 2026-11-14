# Algorithmic Efficiency Comparison

## Raw Execution Outputs

### Run 1
```text
Naive algorithm result: 625025000
Naive algorithm time: [ضع وقت A للتشغيل 1] seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: [ضع وقت B للتشغيل 1] seconds
Naive algorithm result: 625025000
Naive algorithm time: [ضع وقت A للتشغيل 2] seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: [ضع وقت B للتشغيل 2] seconds
Naive algorithm result: 625025000
Naive algorithm time: [ضع وقت A للتشغيل 3] seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: [ضع وقت B للتشغيل 3] seconds
rm -f comparison_algorithms comparison_algorithms.c
git add comparison_algorithms-metrics.md
git commit -m "Add algorithmic efficiency comparison metrics"
git push
cd ~/holbertonschool-low_level_programming
ls -la benchmarking/
git status
git branch
cat benchmarking/comparison_algorithms-metrics.md
git add benchmarking/comparison_algorithms-metrics.md
git commit -m "Add comparison algorithms metrics"
git push
cd ~/holbertonschool-low_level_programming/benchmarking
cat << 'EOF' > comparison_algorithms-metrics.md
# Algorithmic Efficiency Comparison

## Raw Execution Outputs

### Run 1
Naive algorithm result: 625025000
Naive algorithm time: 2.764242 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000107 seconds

### Run 2
Naive algorithm result: 625025000
Naive algorithm time: 2.801612 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000105 seconds

### Run 3
Naive algorithm result: 625025000
Naive algorithm time: 2.770523 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000106 seconds

## Average Execution Time
- Naive algorithm (`count_even_naive`): 2.778792 seconds
- Single-pass algorithm (`count_even_single_pass`): 0.000106 seconds

## Relative Difference
Implementation A (`count_even_naive`) is ~26215 times slower than Implementation B (`count_even_single_pass`).
