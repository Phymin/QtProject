�}�6  y  ]O��2�q��u
��ʣC��n��;&�l���p�Z�Y�E��� pJ�6w�9%y�}��B���JVJ��DӐDv9V�T�jjl��Y�ᲇ%Tg�	m;1J0F���O�LϽMD	p�A���<ғug� ���;E�D2�������H��DZ�-0��x����R�~��(��5��g�4N�y�������I2�������Csh;�Fe�� 蛘�9(@�V���1{ ��z�`��؉S{C��w$�W����@*F}a^Қ��G��r��o���b��@��[�4���s�s���a%��[�y?���|Y���Q7R�y��0K��u��.8f���G��hd|��2�i��c�F�͞;JV(��y2SK;�t�W&/��Ԭ�Ű��ƽ*r�
+�����M%�#w�ķ?�#>IO,*�G~�S�[)Az\��χ�g)}�����}��sB�DJ���?�)x,'�I��ό�4��sr��ql�(O�߿�׉Xbai� OuoQ��� Z'J��7�
1��[n��n�6"qںE^,��u�#��Q���k��%m�8` 9����He��m�����H�D��w5p���c���'/�0�`�Q�/�j�i�\Y9�,An>8a�kI�::��������pu�^d4�Z���ΰR�%6%��TзZ���`��@B,�������<k����t�0#ӌ���:�_dݵ�C��{-봊���_��k��pO$��/n���﷙�p�fu�}o!�X�-j�gB2��l��G�艣�C8QX��}��1-\wS�z]n����f��H(����*wnt$�U}�V㇔l����� :�; 4&<�ezkMz֡!����*LO�*����%Eiyϧ�}��|��s��v�]V(�k�
��5�>a��ȡ_K���tA~�������k�'kx����t���P����~v8�ߩ��4r�:�Kŝ���Tg�����B�l&���$�}`�A~���������}x[)?F����4��Z{3��ə�-SX��s	��nS��g_p����<S�ކ��-�yL�XC��#��CpMp7n�T{W-bOc�����z�<���/,߿��!��{��������	����s?̤����n 
�ɷ�E	ǁs��q�iU��*��F�Sr�)�j�H`wl��g��a:e���Ο���i��i�H�;9�r+���F�\<`u	����B��d�lߒ"�*���� �84�[�5��K���R��红�!j�*d�pe�\��D�.���9S>Ͼ��6��Fl"p7�x%�.�cS��vlq���,�q���g&V8��iZ������ � �|�q�-㳚��Y{*:�ǧ5f���G|�z@-#9^�ԑ�)O ���U�Lg~�M^�`�Q��� )})}*����C~��B'���tu�7���7XD�^�:��J�vZ,*h��$�`PPr�&�j��M��p�/�VM���=
l�$�6k4�H�������d���=ˍ�>�&^����>M��,	��].��td3nn;��#"��Z�k�EG:P���J8�Y��%d˶b���|S+`�+s�����b\�Bо՛�\A���\\�c��j��v�:N%ӬX�#�k�����q8.?d�'��Ԝ���.��m������j0���v��sP[sF�k*=X���dZ��d�(��x{=�*s���W�	K�7b}��b�_H�
)X�-Y�T�b�������r� ����x#��l}?�blM��$]�s2�
�\m�/L��~F��tI�w������g>i���UA��F:�vaѦ��Ŧ�q��mf���k #�_�U��l�4��cm�ّ�Z�O9�Pj������/C���~�{uM}h�T���b"�o���ߎ�顎˚�3�u�o!G��>+�L���Y,O�D��@�`�;�K1��y���k0Z�3�A�F �PTI����x,�g�f�5Ul�*���i�2w����'��,�n��pݒExd�㣾�)�@�-Z���r<�|i���o��}i�B{�Rlӱy����w�����9 �H~�ؚ~�T��kL|���W��
JzE6��,|��Յ�t�T��0���ҁ#�����kO� �jPX��#�XH�jh���G�za�X�#��k�.uPaD,w�F�t�D)�WC}���Wŝ(�n{|�O����O�]�vd����I|9w���-l,�=�qf�th��6 �=l��*A S��C�'���Q&k�>�O˂�gP���'�tVtZ0Fsz��B�z� �?�n�����XZ�t�/�W΃ ��N��{r�Z��o�uǿ�0:�>.�g��9})���qi��bU�W�XӋa+1��5Pr�ub�{�����ݰL7\�rY���fobrJ���A]�/��X��r�$���,.Z��kc'	d�q��ճ^��������L�<]�y?�#\������loadPictures(int albumId)
{
    if (albumId <= 0) {
        mPictures.reset(new vector<unique_ptr<Picture>>());
        return;
    }
    mPictures = mDb.pictureDao.picturesForAlbum(albumId);
}

bool PictureModel::isIndexValid(const QModelIndex& index) const
{
    if (index.row() < 0
            || index.row() >= rowCount()
            || !index.isValid()) {
        return false;
    }
    return true;
}
