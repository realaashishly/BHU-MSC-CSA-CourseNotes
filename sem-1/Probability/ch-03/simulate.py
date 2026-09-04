import random
from tqdm import tqdm

N_TRIAL = 1000000
TARGET_SUM = 7

def main():
    n_events = 0
    for i in tqdm(range(N_TRIAL)):
        dice_total = run_experiment()
        if dice_total == TARGET_SUM:
            n_events += 1
    pr_e = n_events/N_TRIAL
    print(f'probability after {N_TRIAL} trials')
    print('P(E) = ', pr_e)

def run_experiment():
    d1 = roll_dice()
    d2 = roll_dice()
    return d1 + d2

def roll_dice():
    return random.choice([1, 2, 3, 4, 5, 6])

if __name__ == '__main__':
    main()