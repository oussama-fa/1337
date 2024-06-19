unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int d_len;
    unsigned int s_len;
    unsigned int cpy_len;

    d_len = 0;
    s_len = 0;
    cpy_len = 0;
    while (dest[d_len])
        d_len++;
    while (src[cpy_len])
        cpy_len++;
    if (size <= d_len)
        cpy_len += size;
    else
        cpy_len += d_len;
    while (src[s_len] && (d_len + 1) < size)
        dest[d_len++] = src[s_len++];
    dest[d_len] = '\0';
    return (cpy_len);
}