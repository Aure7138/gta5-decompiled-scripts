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
	unk_0x21C966D49C5B368B(1);
	if (unk_0x78BF2001491914AC(3))
	{
		func_1();
	}
	unk_0x46BC609F0CC8B3D1(0);
	unk_0xB561E09A1520996F();
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0x2681BA3707AF6DA7(unk_0x2A5EB8B0FE590B91(), -177f);
		unk_0x164CA344DBD7B6F3(0);
	}
	unk_0x0F39DF6675B2333E(joaat("freight"));
	unk_0x0F39DF6675B2333E(joaat("freightcar"));
	unk_0x0F39DF6675B2333E(joaat("freightgrain"));
	unk_0x0F39DF6675B2333E(joaat("freightcont1"));
	unk_0x0F39DF6675B2333E(joaat("freightcont2"));
	unk_0x0F39DF6675B2333E(joaat("tankercar"));
	unk_0x0F39DF6675B2333E(joaat("metrotrain"));
	while ((((((!unk_0xA1FC9D7AEA164881(joaat("freight")) || !unk_0xA1FC9D7AEA164881(joaat("freightcar"))) || !unk_0xA1FC9D7AEA164881(joaat("freightgrain"))) || !unk_0xA1FC9D7AEA164881(joaat("freightcont1"))) || !unk_0xA1FC9D7AEA164881(joaat("freightcont2"))) || !unk_0xA1FC9D7AEA164881(joaat("tankercar"))) || !unk_0xA1FC9D7AEA164881(joaat("metrotrain")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (iLocal_7)
			{
				if (unk_0x2137828D03306CAF(uLocal_0))
				{
					unk_0xA32CD43840357419(&uLocal_0);
				}
				uLocal_0 = unk_0xA9424AEAE655F4D9(uLocal_4, Local_1, iLocal_6);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				Local_1 = { unk_0xB07517AFB94E5297() };
				iLocal_9 = 0;
			}
			if (unk_0x7FAC45D56235AB39(uLocal_0, 0) && !unk_0xA9A04898798AE9E6(uLocal_0, 0))
			{
				unk_0x02C3A34FE3A61F5E(uLocal_0, fLocal_5);
				unk_0x37180F29E3900ED3(uLocal_0, fLocal_5);
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
	unk_0x46BC609F0CC8B3D1(1);
	unk_0xA232817B0B36F2E5();
}

