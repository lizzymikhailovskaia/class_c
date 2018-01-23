cmake_minimum_required(VERSION 3.7)
project(class_c)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        ex_for_classc/ex_array_store_values.cpp
        ex_for_classc/ex_average_of_three_numbers.cpp
        ex_for_classc/ex_averages_three_testscores.cpp
        ex_for_classc/ex_avoid_integer_division.cpp
        ex_for_classc/ex_break_and_default_statement.cpp
        ex_for_classc/ex_conditional_operator.cpp
        ex_for_classc/ex_counter_var_controls_loop.cpp
        ex_for_classc/ex_do_while_loop.cpp
        ex_for_classc/ex_for_loop.cpp
        ex_for_classc/ex_general_crates_dimensions.cpp
        ex_for_classc/ex_how_cin_read_multiple_values.cpp
        ex_for_classc/ex_if_else_statement_modulusoperator.cpp
        ex_for_classc/ex_increment_and_decrement.cpp
        ex_for_classc/ex_input_validation.cpp
        ex_for_classc/ex_letting_user_specify_filename.cpp
        ex_for_classc/ex_nested_if.cpp
        ex_for_classc/ex_number_of_players_inputval.cpp
        ex_for_classc/ex_rectangle_area.cpp
        ex_for_classc/ex_rectangle_area2.cpp
        ex_for_classc/ex_relational_operators_compare.cpp
        ex_for_classc/ex_running_total.cpp
        ex_for_classc/ex_sentinel_calc_total.cpp
        ex_for_classc/ex_sum_of_2num.cpp
        ex_for_classc/ex_switch_statement.cpp
        ex_for_classc/ex_testing_the_divisor.cpp
        ex_for_classc/ex_three_functions.cpp
        ex_for_classc/ex_three_rows_of_numbers.cpp
        ex_for_classc/ex_total_sales_inatable.cpp
        ex_for_classc/ex_using_cinget.cpp
        ex_for_classc/ex_using_the_getline.cpp
        ex_for_classc/ex_variables_same_name.cpp
        ex_for_classc/ex_while_loop.cpp
        LAB123/lab1.cpp
        LAB123/lab1_3_run_time_errors.cpp
        LAB123/lab1_5_fix_errors.cpp
        LAB123/lab2_1.cpp
        LAB123/lab2_2.cpp
        LAB123/tryIt3A.cpp
        LAB4/color.cpp
        LAB4/triIt4.cpp
        LAB4/tryIt4B.cpp
        LAB5/tryIt5A.cpp
        people/population_bar_char_ex.cpp
        table/table.cpp
        " icecream.cpp"
        brownies.cpp
        cashier_pp.cpp
        driver_license.cpp
        findErrors.cpp
        fortunes.cpp
        game.cpp
        gameOfLife/gameoflife.cpp
        geo_calculator_switch.cpp
        geometry_calculator_if_else.cpp
        hello_world.cpp
        lowest_score_dropped.cpp
        max_min_problem.cpp
        monthly_sales_report.cpp
        percentage.cpp
        petTag.cpp
        purchase_price_assignment.cpp
        purchaseprice_assignment_user.cpp
        random_number_guessing_game.cpp
        sales_tax_report.cpp
        siblings.cpp
        switch.cpp
        test.cpp
        testNum.cpp)

add_executable(class_c ${SOURCE_FILES})