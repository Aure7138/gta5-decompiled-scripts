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
	unk_0xD07EE91CE9B6D4CF(1);
	if (unk_0x5EBD03AF78E7B4DB(3))
	{
		func_1();
	}
	unk_0x356500C85E11485E(0);
	unk_0x813EA4BD19A19ED8();
	if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
	{
		unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), -177f);
		unk_0xD87B76260C547F31(0);
	}
	unk_0xCACEBBBEAD8F262E(joaat("freight"));
	unk_0xCACEBBBEAD8F262E(joaat("freightcar"));
	unk_0xCACEBBBEAD8F262E(joaat("freightgrain"));
	unk_0xCACEBBBEAD8F262E(joaat("freightcont1"));
	unk_0xCACEBBBEAD8F262E(joaat("freightcont2"));
	unk_0xCACEBBBEAD8F262E(joaat("tankercar"));
	unk_0xCACEBBBEAD8F262E(joaat("metrotrain"));
	while ((((((!unk_0x7FC99CCC73354033(joaat("freight")) || !unk_0x7FC99CCC73354033(joaat("freightcar"))) || !unk_0x7FC99CCC73354033(joaat("freightgrain"))) || !unk_0x7FC99CCC73354033(joaat("freightcont1"))) || !unk_0x7FC99CCC73354033(joaat("freightcont2"))) || !unk_0x7FC99CCC73354033(joaat("tankercar"))) || !unk_0x7FC99CCC73354033(joaat("metrotrain")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			if (iLocal_7)
			{
				if (unk_0xDC5D81351D6A4DDB(uLocal_0))
				{
					unk_0xBEEB0585E7242BCC(&uLocal_0);
				}
				uLocal_0 = unk_0x73D3AC2ACEE773CD(uLocal_4, Local_1, iLocal_6);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				Local_1 = { unk_0x13C6B72A19970EAD() };
				iLocal_9 = 0;
			}
			if (unk_0x1095F403F52B42E1(uLocal_0, 0) && !unk_0x7112137033807390(uLocal_0, 0))
			{
				unk_0xAEAF3427E1F14498(uLocal_0, fLocal_5);
				unk_0xC81581CC4C64B997(uLocal_0, fLocal_5);
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
	unk_0x356500C85E11485E(1);
	unk_0x8F1A9FE6D91AAFEB();
}

