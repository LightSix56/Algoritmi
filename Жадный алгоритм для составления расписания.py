def greedy_schedule(num_machines, jobs):
    machine_loads = [0] * num_machines
    assignment = [0] * len(jobs)
    for i in range(len(jobs)):
        min_load = min(machine_loads)
        min_machine = machine_loads.index(min_load)
        machine_loads[min_machine] += jobs[i]
        assignment[i] = min_machine
    makespan = max(machine_loads)
    return assignment, makespan

#пример ввода
print(greedy_schedule(3, [5, 7, 3, 8, 2, 6, 4, 9, 1, 5])
#вывод ([0, 1, 2, 2, 0, 0, 1, 1, 2, 2], 20)
