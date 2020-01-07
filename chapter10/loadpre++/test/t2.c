int main(void)
{
//    _Generic('a', int:puts("WOW"), char:puts("Ja~~"), default:puts("Oui~~"));

    // equivalent
    (void)__builtin_choose_expr(__builtin_types_compatible_p(typeof('a'), int), puts("WOW"),
                                __builtin_choose_expr(__builtin_types_compatible_p(typeof('a'), char), puts("Ja~~"), puts("Oui~~")));
}
