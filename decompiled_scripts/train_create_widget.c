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
	unk_0x3F95CDEE236B6AD7(1);
	if (unk_0x89522B8E487D4EF9(3))
	{
		func_1();
	}
	unk_0x21D223E79BE76031(0);
	unk_0xA5381F0DD8AC529F();
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), -177f);
		unk_0x7FB81B1DD14A3BE4(0);
	}
	unk_0x801429C020C467BA(joaat("freight"));
	unk_0x801429C020C467BA(joaat("freightcar"));
	unk_0x801429C020C467BA(joaat("freightgrain"));
	unk_0x801429C020C467BA(joaat("freightcont1"));
	unk_0x801429C020C467BA(joaat("freightcont2"));
	unk_0x801429C020C467BA(joaat("tankercar"));
	unk_0x801429C020C467BA(joaat("metrotrain"));
	while ((((((!unk_0x5053BF6D5604065B(joaat("freight")) || !unk_0x5053BF6D5604065B(joaat("freightcar"))) || !unk_0x5053BF6D5604065B(joaat("freightgrain"))) || !unk_0x5053BF6D5604065B(joaat("freightcont1"))) || !unk_0x5053BF6D5604065B(joaat("freightcont2"))) || !unk_0x5053BF6D5604065B(joaat("tankercar"))) || !unk_0x5053BF6D5604065B(joaat("metrotrain")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
		{
			if (iLocal_7)
			{
				if (unk_0xD51CFE69539DB6D8(uLocal_0))
				{
					unk_0x4B80345A14FB3DBF(&uLocal_0);
				}
				uLocal_0 = unk_0x542B212BFCD0CB0B(uLocal_4, Local_1, iLocal_6);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				Local_1 = { unk_0xB2A25AE6DD89C70D() };
				iLocal_9 = 0;
			}
			if (unk_0xC45A34912542C4EB(uLocal_0, 0) && !unk_0x76B2D234F1895632(uLocal_0))
			{
				unk_0xA551D9766E783D40(uLocal_0, fLocal_5);
				unk_0x1A7DFECB87D16C8E(uLocal_0, fLocal_5);
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
	unk_0x21D223E79BE76031(1);
	unk_0x52F20802944F8DCE();
}

