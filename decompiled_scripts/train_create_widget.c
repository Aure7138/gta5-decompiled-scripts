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
	unk_0x6F468A6C94DC21AE(1);
	if (unk_0xD63E63DFACCEB80E(3))
	{
		func_1();
	}
	unk_0x4D49E4AAA9BF3444(0);
	unk_0xA4AB44A5C8D9601C();
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0x03D97EDECF2E1859(unk_0x9F92518438215DD0(), -177f);
		unk_0x5EF916489F3787FC(0);
	}
	unk_0x3BC6D217451D6BB7(joaat("freight"));
	unk_0x3BC6D217451D6BB7(joaat("freightcar"));
	unk_0x3BC6D217451D6BB7(joaat("freightgrain"));
	unk_0x3BC6D217451D6BB7(joaat("freightcont1"));
	unk_0x3BC6D217451D6BB7(joaat("freightcont2"));
	unk_0x3BC6D217451D6BB7(joaat("tankercar"));
	unk_0x3BC6D217451D6BB7(joaat("metrotrain"));
	while ((((((!unk_0x149162179DBAEDB0(joaat("freight")) || !unk_0x149162179DBAEDB0(joaat("freightcar"))) || !unk_0x149162179DBAEDB0(joaat("freightgrain"))) || !unk_0x149162179DBAEDB0(joaat("freightcont1"))) || !unk_0x149162179DBAEDB0(joaat("freightcont2"))) || !unk_0x149162179DBAEDB0(joaat("tankercar"))) || !unk_0x149162179DBAEDB0(joaat("metrotrain")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			if (iLocal_7)
			{
				if (unk_0x746960881FB19A89(uLocal_0))
				{
					unk_0xFD0A2176F0470573(&uLocal_0);
				}
				uLocal_0 = unk_0x3C5D64B329FE8011(uLocal_4, Local_1, iLocal_6);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				Local_1 = { unk_0x61D7DC4B0D8F3F6E() };
				iLocal_9 = 0;
			}
			if (unk_0xFC38B241541883D3(uLocal_0, 0) && !unk_0x0BA451447C3B1A8D(uLocal_0))
			{
				unk_0x749E6E836CB99A9E(uLocal_0, fLocal_5);
				unk_0xD443764A10F368D3(uLocal_0, fLocal_5);
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
	unk_0x4D49E4AAA9BF3444(1);
	unk_0xE60DEFFB2A853900();
}

