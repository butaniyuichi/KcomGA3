#include "../main.h"

void CTalkOverlay::Action()
{
	if (m_iDrawFlg == 0) {
		m_x = input->m_x;
		m_y = input->m_y;
	}
}

void CTalkOverlay::Draw()
{
	if (m_iDrawFlg == 0) {
		RECT src, dst;

		//�J���[���
		float col[4] = { 1.0f,1.0f,1.0f,1.0f };

		//�؂�����W
		dst.top = 0;
		dst.left = 0;
		dst.bottom = dst.top + 256;
		dst.right = dst.left + 256;

		//�]������W
		src.top = m_y;
		src.left = m_x;
		src.bottom = src.top + 64;
		src.right = src.left + 64;

		image->Draw(2, &src, &dst, col, 0.0f);
	}
}

void CTalkOverlay::talkDraw()
{
	m_iDrawFlg = 0;
}