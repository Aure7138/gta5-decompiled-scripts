#region Local Var
	var uLocal_0 = 0;
	struct<3> Local_1 = { 0, 0, 0 } ;
	var uLocal_4 = 0;
	float fLocal_5 = 0f;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	bool bLocal_8 = 0;
	int iLocal_9 = 0;
#endregion

void __EntryFunction__()
{
	Local_1 = { 613f, 6438f, 31f };
	fLocal_5 = 5f;
	iLocal_6 = 1;
	unk_0x7798376279BB5369(1);
	if (unk_0x2EBF608FFE6CA406(3))
	{
		func_1();
	}
	unk_0xF48790410026514E(0);
	unk_0x52D3C9744D7CF20D();
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), -177f);
		unk_0x2FB9A57162E54BAB(0);
	}
	unk_0x523BCC9DC80CD82F(joaat("freight"));
	unk_0x523BCC9DC80CD82F(joaat("freightcar"));
	unk_0x523BCC9DC80CD82F(joaat("freightgrain"));
	unk_0x523BCC9DC80CD82F(joaat("freightcont1"));
	unk_0x523BCC9DC80CD82F(joaat("freightcont2"));
	unk_0x523BCC9DC80CD82F(joaat("tankercar"));
	unk_0x523BCC9DC80CD82F(joaat("metrotrain"));
	while ((((((!unk_0xB87F6CF6E5628C67(joaat("freight")) || !unk_0xB87F6CF6E5628C67(joaat("freightcar"))) || !unk_0xB87F6CF6E5628C67(joaat("freightgrain"))) || !unk_0xB87F6CF6E5628C67(joaat("freightcont1"))) || !unk_0xB87F6CF6E5628C67(joaat("freightcont2"))) || !unk_0xB87F6CF6E5628C67(joaat("tankercar"))) || !unk_0xB87F6CF6E5628C67(joaat("metrotrain")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (iLocal_7)
			{
				if (unk_0xC844350D5D58C99A(uLocal_0))
				{
					unk_0x86AA47F87DFBA4D0(&uLocal_0);
				}
				uLocal_0 = unk_0x9F136BAA293FE131(uLocal_4, Local_1, iLocal_6);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				Local_1 = { unk_0xF1EE614CA05DDE75() };
				iLocal_9 = 0;
			}
			if (unk_0xDF1306B443CD3D15(uLocal_0, 0) && !unk_0x437347B10A200C4B(uLocal_0, 0))
			{
				unk_0x88FD99BDEAF715B4(uLocal_0, fLocal_5);
				unk_0x5D6C12CA95187FB3(uLocal_0, fLocal_5);
			}
			if (bLocal_8)
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	unk_0xF48790410026514E(1);
	unk_0x10FAF14A60A0DBE1();
}

