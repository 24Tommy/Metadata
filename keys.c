#include <stdio.h>
#include <cs50.h>

int main(int argc, char *argv[])
{
    string k = argv[1];

    char format[] = "%s.json";
    char filename[sizeof format+100];
    sprintf(filename,format, k);
    FILE *file = fopen(filename,"w");

    fprintf(file, "{\n"
"  \"name\": \"Chamber Key #%s\",\n"
"  \"symbol\": \"HC\",\n"
"  \"description\": \"333 Chamber Keys granting access to the Heresy Chamber.\",\n"
"  \"seller_fee_basis_points\": 800,\n"
"  \"image\": \"https://raw.githubusercontent.com/24Tommy/Metadata/main/Active.gif\",\n"
"  \"attributes\": [\n"
"    {\n"
"      \"trait_type\": \"Status\",\n"
"      \"value\": \"Active\"\n"
"    },\n"
"    {\n"
"      \"trait_type\": \"Renewal Date\",\n"
"      \"value\": \"April 11th\"\n"
"    }\n"
"  ],\n"
"  \"properties\": {\n"
"    \"creators\": [\n"
"      {\n"
"        \"address\": \"HC7iXP79Ef6Jry5bdPLoK7vG4XXBU7k6gyiKYHSJdqsP\",\n"
"        \"share\": 100\n"
"      }\n"
"    ],\n"
"    \"files\": [\n"
"      {\n"
"        \"uri\": \"%s.gif\",\n"
"        \"type\": \"image/gif\"\n"
"      }\n"
"    ]\n"
"  }\n"
"}", k, k);
}