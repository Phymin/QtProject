�}�6  p  MX��{�b���u
��ʣK$���5��j+��P�YXyf��0�e�~((Q=x����7��
������۵i����������
1�l	�� ,P��$�;[<^V����w��՟_3E�,���*^\v۾m-��cF��[ �	��؊�.q(��o�({�E��T�,0���g}f���t`�%��c�a���T�Y���/�M������!!i|�V��Y��(~X`T��U��)Ks[ώq?zS'!��W�.ŊEM�R�)�=���F?�l��F�є$���h���Yz��M���<�|!���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��qlD)�E�t��X0�S"�+]�����TlU�;�bgI&mҠ�&`��h�L��/��4�T�Z=]PE>����_��Y/<?:������ ���]CdtZρ6���(<�0�V4��kY�_�ƪ���b�P����rѮ��
�eN�c�+�}��{�8���o*-�J|��c���&coS�GL$����4ג��zϘ�;���v��̏ɐ�Xz��\)��3ђ�a�&�w+8s��0"����v1�Q����c%��C)�Y�J\	���q�Zs\�=:���sҠ��q�ҫ8-_ST=������R�����xAK	#W;��2���rN�͠��}�O�}ʊ��q�KR2[ ��-l�� ����Ť�~���h�$��D�iҙ��}3���:��AR����/�m.�(^|�w��R�� �K��i��~�j$�V�@�QH:C��꺶��L͒Ӕ���_i�O٢�ᬀ�m'q��t�(��P.ꚫu���A���l,����1����Kt�l!̙�yd�N��de�)��M�)�XP��b��e��m�aV �T��G���I@E�� �GL�ø~ ]�d�
_�lRĘ&�Ir�wӽy�f,�m�:=Q��
����2x�`dA	nm��@	*�ұY�T��&��I��7IhM����6����">�qF�%���e�W�NH�@ZA��Q�x��-�G���O}n@^`� ��B_D��b���6�W��\_��M�k-\�$��+a����}������Y׵���Y�2��Ǐy�X�Np���cb���V}���h�"��m��ŀ2�.��%[@Ԭb���\�.p|I��j�.����T$D���
�����p3̺"�h5`%���m����|V9g�o�5_f�RIA�Y?��#J'�2ͅ���.1��mEr��լ�l�0Y����X�1B0/��p�F��𭖶N�+9��$��w�	�)� AS9���T�{ @`���S�Xc��Y%&Gv��N|�lD'�G���W�/���t�`��$�8�6sp']rs���_�mZ��;��}7y�cݪ�oW��/�Wp��2���G�%軎���.�O�����J�g��J7��\�Vf���� ։CP����n�b�O�x�FW�
���G:�k��B�-҉���,>&��o`�&"���ߦwRl����=���i��؛ݡ���ә�H���y�+z�b��#ٝ�G��g�@��ߠ��*8
�R�r���p��/��B�	%Ug�Ou�E��s)�)���a"u�׏���n%�A��	��H�f2�5�D�Y��J݁�������j�X��DtQ��yƖ�b��$�p�r��#hw����D 9�ֹ��w�K��{B,C���<�~ʺH
�%*�Yo%:I���W��p�\�O���L.)������ɇ����0ѹ��g�)��,{g>j |�8���I���B-��a���+"�7+���ܚo�Ď�0[W������Lڽ
����#�}���T�(>:�Kn�$   QHash<int, QByteArray> roles;
    roles[Roles::IdRole] = "id";
    roles[Roles::NameRole] = "name";
    return roles;
}

bool AlbumModel::isIndexValid(const QModelIndex& index) const
{
    if (index.row() < 0
            || index.row() >= rowCount()
            || !index.isValid()) {
        return false;
    }
    return true;
}

