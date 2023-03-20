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
	unk_0x36694B456BE80D0A(1);
	if (unk_0xC11469DCA6FC3BB5(3))
	{
		func_1();
	}
	unk_0x1156C6EE7E82A98A(0);
	unk_0xA3120A1385F17FF7();
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		unk_0xF6A103413A202C37(unk_0x096275889B8E0EE0(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0xCF2B9C0645C4651B(unk_0x096275889B8E0EE0(), -177f);
		unk_0x5D1EB123EAC5D071(0);
	}
	unk_0xFA28FE3A6246FC30(joaat("freight"));
	unk_0xFA28FE3A6246FC30(joaat("freightcar"));
	unk_0xFA28FE3A6246FC30(joaat("freightgrain"));
	unk_0xFA28FE3A6246FC30(joaat("freightcont1"));
	unk_0xFA28FE3A6246FC30(joaat("freightcont2"));
	unk_0xFA28FE3A6246FC30(joaat("tankercar"));
	unk_0xFA28FE3A6246FC30(joaat("metrotrain"));
	while ((((((!unk_0x1283B8B89DD5D1B6(joaat("freight")) || !unk_0x1283B8B89DD5D1B6(joaat("freightcar"))) || !unk_0x1283B8B89DD5D1B6(joaat("freightgrain"))) || !unk_0x1283B8B89DD5D1B6(joaat("freightcont1"))) || !unk_0x1283B8B89DD5D1B6(joaat("freightcont2"))) || !unk_0x1283B8B89DD5D1B6(joaat("tankercar"))) || !unk_0x1283B8B89DD5D1B6(joaat("metrotrain")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
		{
			if (iLocal_7)
			{
				if (unk_0xD42BD6EB2E0F1677(uLocal_0))
				{
					unk_0x0D3630FB07E8B570(&uLocal_0);
				}
				uLocal_0 = unk_0xDC7906FFC1BF6C1D(uLocal_4, Local_1, iLocal_6);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				Local_1 = { unk_0x5352E025EC2B416F() };
				iLocal_9 = 0;
			}
			if (unk_0xB86D29B10F627379(uLocal_0, 0) && !unk_0x7D5B1F88E7504BBA(uLocal_0))
			{
				unk_0xDFBA6BBFF7CCAFBB(uLocal_0, fLocal_5);
				unk_0x01021EB2E96B793C(uLocal_0, fLocal_5);
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
	unk_0x1156C6EE7E82A98A(1);
	unk_0x5E8B6D17FF91CD59();
}

