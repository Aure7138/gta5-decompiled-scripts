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
	unk_0xBC03901A15107317(1);
	if (unk_0x7D9C4B359376D38A(3))
	{
		func_1();
	}
	unk_0x6BE2D690B08DD645(0);
	unk_0x0F95E29516E7C457();
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), -177f);
		unk_0xBB9A3C553EECB180(0);
	}
	unk_0x6FF834D85E2DD4C6(joaat("freight"));
	unk_0x6FF834D85E2DD4C6(joaat("freightcar"));
	unk_0x6FF834D85E2DD4C6(joaat("freightgrain"));
	unk_0x6FF834D85E2DD4C6(joaat("freightcont1"));
	unk_0x6FF834D85E2DD4C6(joaat("freightcont2"));
	unk_0x6FF834D85E2DD4C6(joaat("tankercar"));
	unk_0x6FF834D85E2DD4C6(joaat("metrotrain"));
	while ((((((!unk_0x9A0B2ED5055D3F0B(joaat("freight")) || !unk_0x9A0B2ED5055D3F0B(joaat("freightcar"))) || !unk_0x9A0B2ED5055D3F0B(joaat("freightgrain"))) || !unk_0x9A0B2ED5055D3F0B(joaat("freightcont1"))) || !unk_0x9A0B2ED5055D3F0B(joaat("freightcont2"))) || !unk_0x9A0B2ED5055D3F0B(joaat("tankercar"))) || !unk_0x9A0B2ED5055D3F0B(joaat("metrotrain")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (iLocal_7)
			{
				if (unk_0x6ADD12BF4D6D2587(uLocal_0))
				{
					unk_0x2162E5CB22F7BDDD(&uLocal_0);
				}
				uLocal_0 = unk_0xE966A9B472713914(uLocal_4, Local_1, iLocal_6);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				Local_1 = { unk_0x9D1DE9B1332BAA49() };
				iLocal_9 = 0;
			}
			if (unk_0xB8DE76287EDC4957(uLocal_0, 0) && !unk_0x191BE1BC8F26F3C1(uLocal_0, 0))
			{
				unk_0x3ACAE4819D3B4F08(uLocal_0, fLocal_5);
				unk_0x8647AB1A2F1D3D58(uLocal_0, fLocal_5);
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
	unk_0x6BE2D690B08DD645(1);
	unk_0x96A3D9A8A4C7AFD4();
}

