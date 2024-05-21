#ifndef CPUFREQ_H_INCLUDED
#define CPUFREQ_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

	/* Get nominal CPU frequency in hertzs - stable since OS boot.
	   It also corresponds to the frequency of CPU's time stamp counter.
	   Returns 0 if it fails to detect base frequency.
	*/
	float get_base_cpu_freq_hz(void);

	/* Get current CPU frequency in hertzs - dynamic over time. Can be higher or lower than the base frequency.
	   Returns 0 if it fails to detect current frequency.
	*/
	float get_curr_cpu_freq_hz(void);

#ifdef __cplusplus
}
#endif

#endif // CPUFREQ_H_INCLUDED