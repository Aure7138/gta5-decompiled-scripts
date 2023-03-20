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
	unk_0xECB8ED754419899D(1);
	if (unk_0x9CEB376419A71A96(3))
	{
		func_1();
	}
	unk_0xCBA1F19EC382D47B(0);
	unk_0x2CED1D4AFE429226();
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		unk_0xA9AD2484206C8140(unk_0x06736567F820A39E(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0xEF32567B3A5047F5(unk_0x06736567F820A39E(), -177f);
		unk_0x086A554C80BC6C5D(0);
	}
	unk_0xBECC89ACB4E5D4ED(joaat("freight"));
	unk_0xBECC89ACB4E5D4ED(joaat("freightcar"));
	unk_0xBECC89ACB4E5D4ED(joaat("freightgrain"));
	unk_0xBECC89ACB4E5D4ED(joaat("freightcont1"));
	unk_0xBECC89ACB4E5D4ED(joaat("freightcont2"));
	unk_0xBECC89ACB4E5D4ED(joaat("tankercar"));
	unk_0xBECC89ACB4E5D4ED(joaat("metrotrain"));
	while ((((((!unk_0x5C9FE32E2FF37989(joaat("freight")) || !unk_0x5C9FE32E2FF37989(joaat("freightcar"))) || !unk_0x5C9FE32E2FF37989(joaat("freightgrain"))) || !unk_0x5C9FE32E2FF37989(joaat("freightcont1"))) || !unk_0x5C9FE32E2FF37989(joaat("freightcont2"))) || !unk_0x5C9FE32E2FF37989(joaat("tankercar"))) || !unk_0x5C9FE32E2FF37989(joaat("metrotrain")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
		{
			if (iLocal_7)
			{
				if (unk_0xC1EDB61CE0A4B94E(uLocal_0))
				{
					unk_0xB5173B09C7DAE285(&uLocal_0);
				}
				uLocal_0 = unk_0xF55790CC709E9487(uLocal_4, Local_1, iLocal_6);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				Local_1 = { unk_0x0FF3808C1DA60C89() };
				iLocal_9 = 0;
			}
			if (unk_0x1B6292EA51632C25(uLocal_0, 0) && !unk_0xBDA1F5E8A36BFA07(uLocal_0, 0))
			{
				unk_0xD0B7C69558227BF0(uLocal_0, fLocal_5);
				unk_0xF242920A376010BA(uLocal_0, fLocal_5);
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
	unk_0xCBA1F19EC382D47B(1);
	unk_0xF5DF8F3392CDD07B();
}

