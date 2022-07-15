fn my_sum(n: i32) -> i32 {
    if n == 0 {
        return 0;
    }
    let my_sum = |_x: i32| -> i32 { -1 };
    return my_sum(n - 1) + n;
}
fn main() {
    println!("{}", my_sum(7));
}
