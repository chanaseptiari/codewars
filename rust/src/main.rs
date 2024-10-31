mod add_binary;
mod count_by;
mod find_missing_letter;
mod flip;
mod odd_count;
mod remove_exclamation_marks;
mod series_sum;
mod sum_or_product;
mod unique_in_order;

fn main() {
    println!("Hello, world!");
}

#[test]
fn hello_test() {
    println!("Hello Unit Test");
}

#[test]
fn flip_test() {
    println!("{:?}", flip::flip('R', &vec![3, 2, 1, 2]));
    println!("{:?}", flip::flip('L', &vec![1, 4, 5, 3, 5]));
}

#[test]
fn sum_or_product_test() {
    println!(
        "{}",
        sum_or_product::sum_or_product(&[1, 2, 3, 4, 5, 6, 7, 8, 9, 10], 4)
    );
    println!(
        "{}",
        sum_or_product::sum_or_product(&[10, 41, 8, 16, 20, 36, 9, 13, 20], 3)
    );
    println!(
        "{}",
        sum_or_product::sum_or_product(&[10, 20, 3, 30, 5, 4], 3)
    );
}

#[test]
fn odd_count_test() {
    println!("{}", odd_count::odd_count(15));
    println!("{}", odd_count::odd_count(15023));
}

#[test]
fn unique_in_order_test() {
    println!(
        "{:?}",
        unique_in_order::unique_in_order("AAAABBBCCDAABBB".chars())
    );
    println!("{:?}", unique_in_order::unique_in_order("ABBCcAD".chars()));
}

#[test]
fn find_missing_letter_tests() {
    println!(
        "{}",
        find_missing_letter::find_missing_letter(&['a', 'b', 'c', 'd', 'f'])
    );
    println!(
        "{}",
        find_missing_letter::find_missing_letter(&['O', 'Q', 'R', 'S'])
    );
}

#[test]
fn count_by_test() {
    println!("{:?}", count_by::count_by(1, 5));
    println!("{:?}", count_by::count_by(1, 10));
    println!("{:?}", count_by::count_by(2, 5));
    println!("{:?}", count_by::count_by(3, 7));
    println!("{:?}", count_by::count_by(50, 5));
    println!("{:?}", count_by::count_by(100, 6));
}

#[test]
fn series_sum_test() {
    println!("{:?}", series_sum::series_sum(1));
    println!("{:?}", series_sum::series_sum(2));
    println!("{:?}", series_sum::series_sum(3));
    println!("{:?}", series_sum::series_sum(7));
    println!("{:?}", series_sum::series_sum(39));
    println!("{:?}", series_sum::series_sum(0));
}

#[test]
fn remove_exclamation_marks_test() {
    println!(
        "{:?}",
        remove_exclamation_marks::remove_exclamation_marks("Hello World!")
    );
    println!(
        "{:?}",
        remove_exclamation_marks::remove_exclamation_marks("Hello World!!!")
    );
    println!(
        "{:?}",
        remove_exclamation_marks::remove_exclamation_marks("Hi! Hello!")
    );
    println!(
        "{:?}",
        remove_exclamation_marks::remove_exclamation_marks("")
    );
    println!(
        "{:?}",
        remove_exclamation_marks::remove_exclamation_marks("Oh, no!!!!")
    );
}

#[test]
fn add_binary_test() {
    println!("{:?}", add_binary::add_binary(1, 1));
    println!("{:?}", add_binary::add_binary(0, 1));
    println!("{:?}", add_binary::add_binary(1, 0));
    println!("{:?}", add_binary::add_binary(2, 2));
    println!("{:?}", add_binary::add_binary(51, 12));
}
