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
	unk_0x25A523E067E06F54(1);
	if (unk_0xE8A79675302ED812(3))
	{
		func_1();
	}
	unk_0xED48729ADA05C6DE(0);
	unk_0x28F3C8C5AD5BD015();
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), -177f);
		unk_0xF3F01A78937DC905(0);
	}
	unk_0xF243B7A14FCFD0F4(joaat("freight"));
	unk_0xF243B7A14FCFD0F4(joaat("freightcar"));
	unk_0xF243B7A14FCFD0F4(joaat("freightgrain"));
	unk_0xF243B7A14FCFD0F4(joaat("freightcont1"));
	unk_0xF243B7A14FCFD0F4(joaat("freightcont2"));
	unk_0xF243B7A14FCFD0F4(joaat("tankercar"));
	unk_0xF243B7A14FCFD0F4(joaat("metrotrain"));
	while ((((((!unk_0xD6513D668481290A(joaat("freight")) || !unk_0xD6513D668481290A(joaat("freightcar"))) || !unk_0xD6513D668481290A(joaat("freightgrain"))) || !unk_0xD6513D668481290A(joaat("freightcont1"))) || !unk_0xD6513D668481290A(joaat("freightcont2"))) || !unk_0xD6513D668481290A(joaat("tankercar"))) || !unk_0xD6513D668481290A(joaat("metrotrain")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (iLocal_7)
			{
				if (unk_0x724D816EA203A79E(uLocal_0))
				{
					unk_0xCBD3B8A22DC34DE4(&uLocal_0);
				}
				uLocal_0 = unk_0xE6F956ED0C35CEC7(uLocal_4, Local_1, iLocal_6);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				Local_1 = { unk_0x8AB4E14F6E158D9D() };
				iLocal_9 = 0;
			}
			if (unk_0xE59B7F5A03335350(uLocal_0, 0) && !unk_0x1D403DFADBC2DE3C(uLocal_0, 0))
			{
				unk_0x2D4A9A2A2B11931A(uLocal_0, fLocal_5);
				unk_0x3BC0D8886158D9A7(uLocal_0, fLocal_5);
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
	unk_0xED48729ADA05C6DE(1);
	unk_0x95E4B6F3ED223F5A();
}

