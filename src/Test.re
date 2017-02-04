open Ctypes;
open PosixTypes;
open Foreign;
open Time;

let time = foreign "time" (ptr time_t @-> returning time_t);

let time' = fun () => time (from_voidp time_t null);

print_string to_string (time' ());
print_newline ();

