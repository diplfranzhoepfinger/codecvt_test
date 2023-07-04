#include <cstdio>
#include <codecvt>

/* Inside a .cpp file, app_main function must be declared with C linkage */
void app_codecvt()
{


	char16_t value = L'\u2780';
    auto &converter = std::use_facet<std::codecvt<char16_t, char, std::mbstate_t>>(std::locale());
    std::mbstate_t mb{};
    char buf[converter.max_length()];
    const char16_t *from_next;
    char *to_next;
    converter.out(mb, &value, &value + 1, from_next, buf, buf + converter.max_length(), to_next);



    printf("buf = %s ", buf);





}
