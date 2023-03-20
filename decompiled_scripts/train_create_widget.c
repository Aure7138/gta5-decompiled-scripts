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
	unk_0x5DB716F779D8C70F(1);
	if (unk_0x524AF15206846700(3))
	{
		func_1();
	}
	unk_0x26EBC33DCC570031(0);
	unk_0x1E0ABBAD9295C341();
	if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		unk_0x4EEE9D9427E70F4E(unk_0x27D769C59BC9D030(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0xFBDCF3D5834B58D8(unk_0x27D769C59BC9D030(), -177f);
		unk_0x0B28AEB595CB09AF(0);
	}
	unk_0x97C59C4E8349D15F(joaat("freight"));
	unk_0x97C59C4E8349D15F(joaat("freightcar"));
	unk_0x97C59C4E8349D15F(joaat("freightgrain"));
	unk_0x97C59C4E8349D15F(joaat("freightcont1"));
	unk_0x97C59C4E8349D15F(joaat("freightcont2"));
	unk_0x97C59C4E8349D15F(joaat("tankercar"));
	unk_0x97C59C4E8349D15F(joaat("metrotrain"));
	while ((((((!unk_0x875098323FCA8FE6(joaat("freight")) || !unk_0x875098323FCA8FE6(joaat("freightcar"))) || !unk_0x875098323FCA8FE6(joaat("freightgrain"))) || !unk_0x875098323FCA8FE6(joaat("freightcont1"))) || !unk_0x875098323FCA8FE6(joaat("freightcont2"))) || !unk_0x875098323FCA8FE6(joaat("tankercar"))) || !unk_0x875098323FCA8FE6(joaat("metrotrain")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
		{
			if (iLocal_7)
			{
				if (unk_0xD2CFFE76B625AE55(uLocal_0))
				{
					unk_0x73A64FC3157DD8A7(&uLocal_0);
				}
				uLocal_0 = unk_0x3320CDE7739E0174(uLocal_4, Local_1, iLocal_6);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				Local_1 = { unk_0xBA52BEE23FDD4B7C() };
				iLocal_9 = 0;
			}
			if (unk_0x0B4DDB992C7BCF57(uLocal_0, 0) && !unk_0x2006A8C1BA2AFE80(uLocal_0, 0))
			{
				unk_0x21BEADDBD02DE004(uLocal_0, fLocal_5);
				unk_0x20A9FA4A7B48AC99(uLocal_0, fLocal_5);
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
	unk_0x26EBC33DCC570031(1);
	unk_0x7C3AA2D27E16E2AD();
}

