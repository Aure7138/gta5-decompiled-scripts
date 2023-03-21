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
	unk_0xB5533C0C8A2B9BF2(1);
	if (unk_0xB9B05E900D325C36(3))
	{
		func_1();
	}
	unk_0x832028B438E813F9(0);
	unk_0x21813C2AA1BA2088();
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		unk_0x0A69FBBF51E1A08F(unk_0x0031992CA618A445(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0x5082D1A6D078DB20(unk_0x0031992CA618A445(), -177f);
		unk_0x31F42B23A853582E(0);
	}
	unk_0xBE91026C1FC72180(joaat("freight"));
	unk_0xBE91026C1FC72180(joaat("freightcar"));
	unk_0xBE91026C1FC72180(joaat("freightgrain"));
	unk_0xBE91026C1FC72180(joaat("freightcont1"));
	unk_0xBE91026C1FC72180(joaat("freightcont2"));
	unk_0xBE91026C1FC72180(joaat("tankercar"));
	unk_0xBE91026C1FC72180(joaat("metrotrain"));
	while ((((((!unk_0x772F801619C83779(joaat("freight")) || !unk_0x772F801619C83779(joaat("freightcar"))) || !unk_0x772F801619C83779(joaat("freightgrain"))) || !unk_0x772F801619C83779(joaat("freightcont1"))) || !unk_0x772F801619C83779(joaat("freightcont2"))) || !unk_0x772F801619C83779(joaat("tankercar"))) || !unk_0x772F801619C83779(joaat("metrotrain")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			if (iLocal_7)
			{
				if (unk_0x76B3C79DE564AFC6(uLocal_0))
				{
					unk_0xF465B95D6498C1B8(&uLocal_0);
				}
				uLocal_0 = unk_0xEA110A8811234A46(uLocal_4, Local_1, iLocal_6);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				Local_1 = { unk_0xDDA7CED05EA2556B() };
				iLocal_9 = 0;
			}
			if (unk_0x432757A9E7AAFA96(uLocal_0, 0) && !unk_0x7A6C051038031EFA(uLocal_0, 0))
			{
				unk_0x4690A16905C95BE6(uLocal_0, fLocal_5);
				unk_0x6D583CF953E91207(uLocal_0, fLocal_5);
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
	unk_0x832028B438E813F9(1);
	unk_0xBEE2834559A8897A();
}

