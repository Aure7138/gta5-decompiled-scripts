#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0xD63E63DFACCEB80E(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!unk_0x94E72F17611BCD3C(uLocal_2, 1))
	{
		if (!unk_0x94E72F17611BCD3C(uLocal_2, 0))
		{
			if (unk_0x746960881FB19A89(uLocal_0))
			{
				if (unk_0xFC38B241541883D3(uLocal_0, 0))
				{
					unk_0x336AE92FD68DEF98(uLocal_0, 0, 1);
					unk_0xD9B13F0A69759C12(uLocal_0, 1);
					unk_0x08B4E5756419497B(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0x746960881FB19A89(uLocal_1))
					{
						unk_0x336AE92FD68DEF98(uLocal_1, 0, 1);
						unk_0xD9B13F0A69759C12(uLocal_1, 1);
						unk_0x08B4E5756419497B(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0xEDB9A377CD8B7F03(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if (unk_0xFC38B241541883D3(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0xEDB9A377CD8B7F03(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0x0FF9FE2CB115CFB9(uLocal_0))
				{
					unk_0xEDB9A377CD8B7F03(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0xEDB9A377CD8B7F03(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0x9187463EB4918A4D(&uLocal_0);
	unk_0x13446D908F119EB2(&uLocal_1);
	unk_0xE60DEFFB2A853900();
}

