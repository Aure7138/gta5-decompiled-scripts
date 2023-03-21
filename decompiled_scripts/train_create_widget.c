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
	unk_0x7E34CF542225E666(1);
	if (unk_0xBCA819F9975BEDFA(3))
	{
		func_1();
	}
	unk_0x223C8480EA6EE20B(0);
	unk_0xF491075B1A8D5848();
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), -177f);
		unk_0xBA7CD73403732191(0);
	}
	unk_0xE1324F59713746FA(joaat("freight"));
	unk_0xE1324F59713746FA(joaat("freightcar"));
	unk_0xE1324F59713746FA(joaat("freightgrain"));
	unk_0xE1324F59713746FA(joaat("freightcont1"));
	unk_0xE1324F59713746FA(joaat("freightcont2"));
	unk_0xE1324F59713746FA(joaat("tankercar"));
	unk_0xE1324F59713746FA(joaat("metrotrain"));
	while ((((((!unk_0x9F746898F7881612(joaat("freight")) || !unk_0x9F746898F7881612(joaat("freightcar"))) || !unk_0x9F746898F7881612(joaat("freightgrain"))) || !unk_0x9F746898F7881612(joaat("freightcont1"))) || !unk_0x9F746898F7881612(joaat("freightcont2"))) || !unk_0x9F746898F7881612(joaat("tankercar"))) || !unk_0x9F746898F7881612(joaat("metrotrain")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			if (iLocal_7)
			{
				if (unk_0x23E9113C762466ED(uLocal_0))
				{
					unk_0xC986BC2DAE6ECFB1(&uLocal_0);
				}
				uLocal_0 = unk_0x31E4DA47D87171B7(uLocal_4, Local_1, iLocal_6);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				Local_1 = { unk_0xF2AD13C8E9138D4B() };
				iLocal_9 = 0;
			}
			if (unk_0x45CD66F0A131E554(uLocal_0, 0) && !unk_0xA929B2923D14E2F8(uLocal_0, 0))
			{
				unk_0x68AD1450A50267E1(uLocal_0, fLocal_5);
				unk_0xED138B869E6DF35A(uLocal_0, fLocal_5);
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
	unk_0x223C8480EA6EE20B(1);
	unk_0x921053BAF754303D();
}

