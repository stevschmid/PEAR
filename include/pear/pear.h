#ifndef INC_PEAR_H
#define INC_PEAR_H

struct user_args
{
  char       * fastq_left;   /**< @brief Forward pairend FASTQ filename */
  char       * fastq_right;  /**< @brief Reverse pairend FASTQ filename */
  int          min_asm_len;  /**< @brief Minimum assembly length threshold */
  int          max_asm_len;  /**< @brief Maximum assembly length threshold */
  int          qual_thres;   /**< @brief Quality score threshold */
  int          score_method; /**< @brief Scoring method to use */
  int          min_overlap;  /**< @brief Minimum overlap threshold */
  int          phred_base;   /**< @brief Base Phred quality score, i.e. 33 or 64 */
  double       max_uncalled; /**< @brief Maximum proportion of uncalled bases (N) */
  int          emp_freqs;    /**< @brief Flag whether to compute/use empirical base frequencies */
  double       p_value;      /**< @brief P-value to use */
  double       geom_mean;    /**< @brief Geometric mean */
  int          test;         /**< @brief Test method */
  char       * outfile;      /**< @brief Output filename to use */
  int          min_trim_len; /**< @brief Minimum trim length */
  size_t       memory;       /**< @brief Amount of memory to be used */
  int          threads;      /**< @brief Number of threads to use */
  int          cap;          /**< @brief Quality score cap value */
  int          nbase;        /**< @brief When merging, use N if one of the two bases is degenerate */
  int          keep_dir;     /**< @brief Keep original direction for the unassembled reverse reads */
};

extern void pear_init_args (struct user_args *psw);
extern int pear_run (struct user_args *psw,
    unsigned long *out_count_assembled,
    unsigned long *out_count_unassembled,
    unsigned long *out_count_discarded,
    unsigned long *out_count_total);

#endif
