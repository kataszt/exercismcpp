use time::PrimitiveDateTime as DateTime;
use time::Duration;

// Returns a DateTime one billion seconds after start.
pub fn after(start: DateTime) -> DateTime {
    //todo!("What time is a gigasecond later than {start}");
    //Duration::seconds(1_000_000_000)
    let gigasecond_in_seconds = 1_000_000_000;

    start + Duration::seconds(gigasecond_in_seconds)
}
