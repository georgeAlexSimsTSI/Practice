# Hamming code
Code to calculate the Hamming Distance between two strings.
(wip) need to verify strings to only allow valid chars

E.g.
<pre>
GAGCCTACTAACGGGAT
CATCGTAATGACGGCCT
^ ^ ^  ^ ^    ^^
distance = 7
</pre>
If the strings are not the same length then a std::domain_error should be thrown
