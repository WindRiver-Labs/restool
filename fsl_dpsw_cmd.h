/* Copyright 2013-2014 Freescale Semiconductor Inc.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
* * Redistributions of source code must retain the above copyright
* notice, this list of conditions and the following disclaimer.
* * Redistributions in binary form must reproduce the above copyright
* notice, this list of conditions and the following disclaimer in the
* documentation and/or other materials provided with the distribution.
* * Neither the name of the above-listed copyright holders nor the
* names of any contributors may be used to endorse or promote products
* derived from this software without specific prior written permission.
*
*
* ALTERNATIVELY, this software may be distributed under the terms of the
* GNU General Public License ("GPL") as published by the Free Software
* Foundation, either version 2 of that License or (at your option) any
* later version.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR CONTRIBUTORS BE
* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
* CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
*/
#ifndef __FSL_DPSW_CMD_H
#define __FSL_DPSW_CMD_H

/* DPSW Version */
#define DPSW_VER_MAJOR				2
#define DPSW_VER_MINOR				0

/* Command IDs */
#define DPSW_CMDID_CLOSE			0x800
#define DPSW_CMDID_OPEN				0x802
#define DPSW_CMDID_CREATE			0x902
#define DPSW_CMDID_DESTROY			0x900

#define DPSW_CMDID_ENABLE			0x002
#define DPSW_CMDID_DISABLE			0x003
#define DPSW_CMDID_GET_ATTR			0x004
#define DPSW_CMDID_RESET			0x005
#define DPSW_CMDID_IS_ENABLED			0x006

#define DPSW_CMDID_SET_IRQ			0x010
#define DPSW_CMDID_GET_IRQ			0x011
#define DPSW_CMDID_SET_IRQ_ENABLE		0x012
#define DPSW_CMDID_GET_IRQ_ENABLE		0x013
#define DPSW_CMDID_SET_IRQ_MASK			0x014
#define DPSW_CMDID_GET_IRQ_MASK			0x015
#define DPSW_CMDID_GET_IRQ_STATUS		0x016
#define DPSW_CMDID_CLEAR_IRQ_STATUS		0x017

#define DPSW_CMDID_SET_POLICER			0x020
#define DPSW_CMDID_SET_BUFFER_DEPLETION		0x021
#define DPSW_CMDID_SET_REFLECTION_IF		0x022
#define DPSW_CMDID_SET_PTP_V2			0x023
#define DPSW_CMDID_ADD_CUSTOM_TPID		0x024

#define DPSW_CMDID_IF_SET_TCI			0x030
#define DPSW_CMDID_IF_SET_STP			0x031
#define DPSW_CMDID_IF_SET_ACCEPTED_FRAMES	0x032
#define DPSW_CMDID_SET_IF_ACCEPT_ALL_VLAN	0x033
#define DPSW_CMDID_IF_GET_COUNTER		0x034
#define DPSW_CMDID_IF_SET_COUNTER		0x035
#define DPSW_CMDID_IF_TC_SET_MAP		0x036
#define DPSW_CMDID_IF_ADD_REFLECTION		0x037
#define DPSW_CMDID_IF_REMOVE_REFLECTION		0x038
#define DPSW_CMDID_IF_TC_SET_METERING_MARKING	0x039

#define DPSW_CMDID_IF_SET_TRANSMIT_RATE		0x03B
#define DPSW_CMDID_IF_TC_SET_BW			0x03C
#define DPSW_CMDID_IF_ENABLE			0x03D
#define DPSW_CMDID_IF_DISABLE			0x03E
#define DPSW_CMDID_IF_TC_SET_Q_CONGESTION	0x03F
#define DPSW_CMDID_IF_TC_SET_PFC		0x040
#define DPSW_CMDID_IF_TC_SET_CN			0x041
#define DPSW_CMDID_IF_GET_ATTR			0x042
#define DPSW_CMDID_IF_SET_MACSEC		0x043
#define DPSW_CMDID_IF_SET_MAX_FRAME_LENGTH	0x044
#define DPSW_CMDID_IF_GET_MAX_FRAME_LENGTH	0x045
#define DPSW_CMDID_IF_GET_LINK_STATE		0x046
#define DPSW_CMDID_IF_SET_FLOODING		0x047
#define DPSW_CMDID_IF_SET_BROADCAST		0x048
#define DPSW_CMDID_IF_SET_MULTICAST		0x049
#define DPSW_CMDID_IF_GET_TCI			0x04A

#define DPSW_CMDID_VLAN_ADD			0x060
#define DPSW_CMDID_VLAN_ADD_IF			0x061
#define DPSW_CMDID_VLAN_ADD_IF_UNTAGGED		0x062
#define DPSW_CMDID_VLAN_ADD_IF_FLOODING		0x063
#define DPSW_CMDID_VLAN_REMOVE_IF		0x064
#define DPSW_CMDID_VLAN_REMOVE_IF_UNTAGGED	0x065
#define DPSW_CMDID_VLAN_REMOVE_IF_FLOODING	0x066
#define DPSW_CMDID_VLAN_REMOVE			0x067
#define DPSW_CMDID_VLAN_GET_IF			0x068
#define DPSW_CMDID_VLAN_GET_IF_FLOODING		0x069
#define DPSW_CMDID_VLAN_GET_IF_UNTAGGED		0x06A
#define DPSW_CMDID_VLAN_GET_ATTRIBUTES		0x06B

#define DPSW_CMDID_FDB_GET_MULTICAST		0x080
#define DPSW_CMDID_FDB_GET_UNICAST		0x081
#define DPSW_CMDID_FDB_ADD			0x082
#define DPSW_CMDID_FDB_REMOVE			0x083
#define DPSW_CMDID_FDB_ADD_UNICAST		0x084
#define DPSW_CMDID_FDB_REMOVE_UNICAST		0x085
#define DPSW_CMDID_FDB_ADD_MULTICAST		0x086
#define DPSW_CMDID_FDB_REMOVE_MULTICAST		0x087
#define DPSW_CMDID_FDB_SET_LEARNING_MODE	0x088
#define DPSW_CMDID_FDB_GET_ATTR			0x089

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_OPEN(cmd, dpsw_id) \
	MC_CMD_OP(cmd, 0, 0,  32, int,	 dpsw_id)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_CREATE(cmd, cfg) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, cfg->num_ifs);\
	MC_CMD_OP(cmd, 0, 16,  8, uint8_t,  cfg->adv.max_fdbs);\
	MC_CMD_OP(cmd, 1, 0,  16, uint16_t, cfg->adv.max_vlans);\
	MC_CMD_OP(cmd, 1, 16, 16, uint16_t, cfg->adv.max_fdb_entries);\
	MC_CMD_OP(cmd, 1, 32, 16, uint16_t, cfg->adv.fdb_aging_time);\
	MC_CMD_OP(cmd, 1, 48, 16, uint16_t, cfg->adv.max_fdb_mc_groups);\
	MC_CMD_OP(cmd, 2, 0,  64, uint64_t, cfg->adv.options);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_RSP_IS_ENABLED(cmd, en) \
	MC_RSP_OP(cmd, 0, 0,  1,  int,	    en)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_SET_IRQ(cmd, irq_index, irq_paddr, irq_val, user_irq_id) \
do { \
	MC_CMD_OP(cmd, 0, 0,  8,  uint8_t,  irq_index);\
	MC_CMD_OP(cmd, 0, 32, 32, uint32_t, irq_val);\
	MC_CMD_OP(cmd, 1, 0,  64, uint64_t, irq_paddr);\
	MC_CMD_OP(cmd, 2, 0,  32, int,	 user_irq_id); \
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_GET_IRQ(cmd, irq_index) \
	MC_CMD_OP(cmd, 0, 32, 8,  uint8_t,  irq_index)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_RSP_GET_IRQ(cmd, type, irq_paddr, irq_val, user_irq_id) \
do { \
	MC_RSP_OP(cmd, 0, 0,  32, uint32_t, irq_val); \
	MC_RSP_OP(cmd, 1, 0,  64, uint64_t, irq_paddr);\
	MC_RSP_OP(cmd, 2, 0,  32, int,	 user_irq_id); \
	MC_RSP_OP(cmd, 2, 32, 32, int,	 type); \
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_SET_IRQ_ENABLE(cmd, irq_index, enable_state) \
do { \
	MC_CMD_OP(cmd, 0, 0,  8, uint8_t, enable_state); \
	MC_CMD_OP(cmd, 0, 32, 8, uint8_t, irq_index);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_GET_IRQ_ENABLE(cmd, irq_index) \
	MC_CMD_OP(cmd, 0, 32, 8,  uint8_t,  irq_index)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_RSP_GET_IRQ_ENABLE(cmd, enable_state) \
	MC_RSP_OP(cmd, 0, 0,  8,  uint8_t,  enable_state)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_SET_IRQ_MASK(cmd, irq_index, mask) \
do { \
	MC_CMD_OP(cmd, 0, 0,  32, uint32_t, mask); \
	MC_CMD_OP(cmd, 0, 32, 8,  uint8_t,  irq_index);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_GET_IRQ_MASK(cmd, irq_index) \
	MC_CMD_OP(cmd, 0, 32, 8,  uint8_t,  irq_index)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_RSP_GET_IRQ_MASK(cmd, mask) \
	MC_RSP_OP(cmd, 0, 0,  32, uint32_t, mask)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_GET_IRQ_STATUS(cmd, irq_index) \
	MC_CMD_OP(cmd, 0, 32, 8,  uint8_t,  irq_index)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_RSP_GET_IRQ_STATUS(cmd, status) \
	MC_RSP_OP(cmd, 0, 0,  32, uint32_t, status)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_CLEAR_IRQ_STATUS(cmd, irq_index, status) \
do { \
	MC_CMD_OP(cmd, 0, 0,  32, uint32_t, status); \
	MC_CMD_OP(cmd, 0, 32, 8,  uint8_t,  irq_index);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_RSP_GET_ATTR(cmd, attr) \
do { \
	MC_RSP_OP(cmd, 0, 0,  16, uint16_t, attr->num_ifs);\
	MC_RSP_OP(cmd, 0, 16, 8,  uint8_t,  attr->max_fdbs);\
	MC_RSP_OP(cmd, 0, 24, 8,  uint8_t,  attr->num_fdbs);\
	MC_RSP_OP(cmd, 0, 32, 16, uint16_t, attr->max_vlans);\
	MC_RSP_OP(cmd, 0, 48, 16, uint16_t, attr->num_vlans);\
	MC_RSP_OP(cmd, 1, 0,  16, uint16_t, attr->version.major);\
	MC_RSP_OP(cmd, 1, 16, 16, uint16_t, attr->version.minor);\
	MC_RSP_OP(cmd, 2, 0,  32, int,	 attr->id);\
	MC_RSP_OP(cmd, 2, 32, 16, uint16_t, attr->mem_size);\
	MC_RSP_OP(cmd, 3, 0,  64, uint64_t, attr->options);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_SET_POLICER(cmd, cfg) \
	MC_CMD_OP(cmd, 0, 0,  1,  enum dpsw_policer_mode, cfg->mode)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_SET_BUFFER_DEPLETION(cmd, cfg) \
do { \
	MC_CMD_OP(cmd, 0, 0,  32, uint32_t, cfg->entrance_threshold);\
	MC_CMD_OP(cmd, 0, 32, 32, uint32_t, cfg->exit_threshold);\
	MC_CMD_OP(cmd, 0, 0,  64, uint64_t, cfg->wr_addr);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_SET_REFLECTION_IF(cmd, if_id) \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_SET_PTP_V2(cmd, cfg) \
do { \
	MC_CMD_OP(cmd, 0, 0,  32, uint32_t, cfg->options);\
	MC_CMD_OP(cmd, 0, 32, 16, uint16_t, cfg->time_offset);\
	MC_CMD_OP(cmd, 0, 48, 1,  int,      cfg->enable);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_SET_FLOODING(cmd, if_id, en) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id);\
	MC_CMD_OP(cmd, 0, 16, 1,  int,	 en);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_SET_BROADCAST(cmd, if_id, en) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id);\
	MC_CMD_OP(cmd, 0, 16, 1,  int,	 en);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_SET_MULTICAST(cmd, if_id, en) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id);\
	MC_CMD_OP(cmd, 0, 16, 1,  int,	 en);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_SET_TCI(cmd, if_id, cfg) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id);\
	MC_CMD_OP(cmd, 0, 16, 12, uint16_t, cfg->vlan_id);\
	MC_CMD_OP(cmd, 0, 28, 1,  uint8_t,  cfg->dei);\
	MC_CMD_OP(cmd, 0, 29, 3,  uint8_t,  cfg->pcp);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_GET_TCI(cmd, if_id) \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_RSP_IF_GET_TCI(cmd, cfg) \
do { \
	MC_RSP_OP(cmd, 0, 16, 16, uint16_t, cfg->vlan_id);\
	MC_RSP_OP(cmd, 0, 32, 8,  uint8_t,  cfg->dei);\
	MC_RSP_OP(cmd, 0, 40, 8,  uint8_t,  cfg->pcp);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_SET_STP(cmd, if_id, cfg) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id);\
	MC_CMD_OP(cmd, 0, 16, 16, uint16_t, cfg->vlan_id);\
	MC_CMD_OP(cmd, 0, 32, 4,  enum dpsw_stp_state, cfg->state);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_SET_ACCEPTED_FRAMES(cmd, if_id, cfg) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id);\
	MC_CMD_OP(cmd, 0, 16, 4,  enum dpsw_accepted_frames, cfg->type);\
	MC_CMD_OP(cmd, 0, 20, 4,  enum dpsw_action, cfg->unaccept_act);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_SET_ACCEPT_ALL_VLAN(cmd, if_id, accept_all) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id);\
	MC_CMD_OP(cmd, 0, 16, 1,  int,	 accept_all);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_GET_COUNTER(cmd, if_id, type) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id);\
	MC_CMD_OP(cmd, 0, 16, 5,  enum dpsw_counter, type);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_RSP_IF_GET_COUNTER(cmd, counter) \
	MC_RSP_OP(cmd, 1, 0, 64, uint64_t, counter)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_SET_COUNTER(cmd, if_id, type, counter) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t,	  if_id);\
	MC_CMD_OP(cmd, 0, 16, 5,  enum dpsw_counter, type);\
	MC_CMD_OP(cmd, 1, 0,  64, uint64_t,	  counter);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_TC_SET_MAP(cmd, if_id, cfg) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id);\
	MC_CMD_OP(cmd, 0, 16, 3,  enum dpsw_user_priority, cfg->user_priority);\
	MC_CMD_OP(cmd, 1, 0,  8,  uint8_t,  cfg->regenerated_priority[0]);\
	MC_CMD_OP(cmd, 1, 8,  8,  uint8_t,  cfg->regenerated_priority[1]);\
	MC_CMD_OP(cmd, 1, 16, 8,  uint8_t,  cfg->regenerated_priority[2]);\
	MC_CMD_OP(cmd, 1, 24, 8,  uint8_t,  cfg->regenerated_priority[3]);\
	MC_CMD_OP(cmd, 1, 32, 8,  uint8_t,  cfg->regenerated_priority[4]);\
	MC_CMD_OP(cmd, 1, 40, 8,  uint8_t,  cfg->regenerated_priority[5]);\
	MC_CMD_OP(cmd, 1, 48, 8,  uint8_t,  cfg->regenerated_priority[6]);\
	MC_CMD_OP(cmd, 1, 56, 8,  uint8_t,  cfg->regenerated_priority[7]);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_ADD_REFLECTION(cmd, if_id, cfg) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id);\
	MC_CMD_OP(cmd, 0, 16, 16, uint16_t, cfg->vlan_id);\
	MC_CMD_OP(cmd, 0, 32, 2,  enum dpsw_reflection_filter, cfg->filter);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_REMOVE_REFLECTION(cmd, if_id, cfg) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id);\
	MC_CMD_OP(cmd, 0, 16, 16, uint16_t, cfg->vlan_id);\
	MC_CMD_OP(cmd, 0, 32, 2,  enum dpsw_reflection_filter, cfg->filter);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_TC_SET_METERING_MARKING(cmd, if_id, tc_id, cfg) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id);\
	MC_CMD_OP(cmd, 0, 16, 8,  uint8_t,  tc_id);\
	MC_CMD_OP(cmd, 0, 24, 4,  enum dpsw_metering_algo, cfg->algo);\
	MC_CMD_OP(cmd, 0, 28, 4,  enum dpsw_metering_mode, cfg->mode);\
	MC_CMD_OP(cmd, 0, 32, 32, uint32_t, cfg->cir);\
	MC_CMD_OP(cmd, 1, 0,  32, uint32_t, cfg->eir);\
	MC_CMD_OP(cmd, 1, 32, 32, uint32_t, cfg->cbs);\
	MC_CMD_OP(cmd, 2, 0,  32, uint32_t, cfg->ebs);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_ADD_CUSTOM_TPID(cmd, cfg) \
	MC_CMD_OP(cmd, 0, 16, 16, uint16_t, cfg->tpid)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_SET_TRANSMIT_RATE(cmd, if_id, cfg) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id);\
	MC_CMD_OP(cmd, 1, 0,  64, uint64_t, cfg->rate);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_TC_SET_BANDWIDTH(cmd, if_id, tc_id, cfg) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id);\
	MC_CMD_OP(cmd, 0, 16, 8,  uint8_t,  tc_id);\
	MC_CMD_OP(cmd, 0, 24, 8,  uint8_t,  cfg->delta_bandwidth);\
	MC_CMD_OP(cmd, 0, 31, 4,  enum dpsw_bw_algo, cfg->algo);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_ENABLE(cmd, if_id) \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_DISABLE(cmd, if_id) \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_TC_SET_Q_CONGESTION(cmd, if_id, tc_id, cfg) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id);\
	MC_CMD_OP(cmd, 0, 16, 8,  uint8_t,  tc_id);\
	MC_CMD_OP(cmd, 0, 32, 32, uint32_t, cfg->exit_threshold);\
	MC_CMD_OP(cmd, 1, 0,  64, uint64_t, cfg->wr_addr);\
	MC_CMD_OP(cmd, 2, 0,  32, uint32_t, cfg->entrance_threshold);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_TC_SET_PFC(cmd, if_id, tc_id, cfg) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id);\
	MC_CMD_OP(cmd, 0, 16, 8,  uint8_t,  tc_id);\
	MC_CMD_OP(cmd, 0, 24, 1,  int,	 cfg->receiver);\
	MC_CMD_OP(cmd, 0, 25, 1,  int,	 cfg->initiator);\
	MC_CMD_OP(cmd, 0, 32, 32, uint32_t, cfg->initiator_trig);\
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, cfg->pause_quanta);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_TC_SET_CN(cmd, if_id, tc_id, cfg) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id);\
	MC_CMD_OP(cmd, 0, 16, 8,  uint8_t,  tc_id);\
	MC_CMD_OP(cmd, 0, 24, 1,  int,	 cfg->enable);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_GET_ATTR(cmd, if_id) \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_RSP_IF_GET_ATTR(cmd, attr) \
do { \
	MC_RSP_OP(cmd, 0, 0,  4,  enum dpsw_accepted_frames, \
							attr->admit_untagged);\
	MC_RSP_OP(cmd, 0, 5,  1,  int,      attr->enabled);\
	MC_RSP_OP(cmd, 0, 6,  1,  int,      attr->accept_all_vlan);\
	MC_RSP_OP(cmd, 0, 16, 8,  uint8_t,  attr->num_tcs);\
	MC_RSP_OP(cmd, 1, 0,  64, uint64_t, attr->options);\
	MC_RSP_OP(cmd, 2, 0,  64, uint64_t, attr->rate);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_SET_MACSEC(cmd, if_id, cfg) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id);\
	MC_CMD_OP(cmd, 0, 16, 4,  enum dpsw_cipher_suite, cfg->cipher_suite);\
	MC_CMD_OP(cmd, 0, 20, 1,  int,	 cfg->enable);\
	MC_CMD_OP(cmd, 1, 0,  64, uint64_t, cfg->sci);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_SET_MAX_FRAME_LENGTH(cmd, if_id, frame_length) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id);\
	MC_CMD_OP(cmd, 0, 16, 16, uint16_t, frame_length);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_GET_MAX_FRAME_LENGTH(cmd, if_id) \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_RSP_IF_GET_MAX_FRAME_LENGTH(cmd, frame_length) \
	MC_RSP_OP(cmd, 0, 16, 16, uint16_t, frame_length)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_IF_GET_LINK_STATE(cmd, if_id) \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, if_id)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_RSP_IF_GET_LINK_STATE(cmd, state) \
	MC_RSP_OP(cmd, 0, 32, 32, int,	 state)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_VLAN_ADD(cmd, vlan_id, cfg) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, cfg->fdb_id);\
	MC_CMD_OP(cmd, 0, 16, 16, uint16_t, vlan_id);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_VLAN_ADD_IF(cmd, vlan_id) \
	MC_CMD_OP(cmd, 0, 16, 16, uint16_t, vlan_id)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_VLAN_ADD_IF_UNTAGGED(cmd, vlan_id) \
	MC_CMD_OP(cmd, 0, 16, 16, uint16_t, vlan_id)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_VLAN_ADD_IF_FLOODING(cmd, vlan_id) \
	MC_CMD_OP(cmd, 0, 16, 16, uint16_t, vlan_id)

#define DPSW_CMD_VLAN_REMOVE_IF(cmd, vlan_id) \
	MC_CMD_OP(cmd, 0, 16, 16, uint16_t, vlan_id)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_VLAN_REMOVE_IF_UNTAGGED(cmd, vlan_id) \
	MC_CMD_OP(cmd, 0, 16, 16, uint16_t, vlan_id)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_VLAN_REMOVE_IF_FLOODING(cmd, vlan_id) \
	MC_CMD_OP(cmd, 0, 16, 16, uint16_t, vlan_id)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_VLAN_REMOVE(cmd, vlan_id) \
	MC_CMD_OP(cmd, 0, 16, 16, uint16_t, vlan_id)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_VLAN_GET_ATTR(cmd, vlan_id) \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, vlan_id)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_RSP_VLAN_GET_ATTR(cmd, attr) \
do { \
	MC_RSP_OP(cmd, 1, 0,  16, uint16_t, attr->fdb_id); \
	MC_RSP_OP(cmd, 1, 16, 16, uint16_t, attr->num_ifs); \
	MC_RSP_OP(cmd, 1, 32, 16, uint16_t, attr->num_untagged_ifs); \
	MC_RSP_OP(cmd, 1, 48, 16, uint16_t, attr->num_flooding_ifs); \
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_VLAN_GET_IF(cmd, vlan_id) \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, vlan_id)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_RSP_VLAN_GET_IF(cmd, cfg) \
	MC_RSP_OP(cmd, 0, 16, 16, uint16_t, cfg->num_ifs)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_VLAN_GET_IF_FLOODING(cmd, vlan_id) \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, vlan_id)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_RSP_VLAN_GET_IF_FLOODING(cmd, cfg) \
	MC_RSP_OP(cmd, 0, 16, 16, uint16_t, cfg->num_ifs)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_VLAN_GET_IF_UNTAGGED(cmd, vlan_id) \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, vlan_id)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_RSP_VLAN_GET_IF_UNTAGGED(cmd, cfg) \
	MC_RSP_OP(cmd, 0, 16, 16, uint16_t, cfg->num_ifs)

/*	param, offset, width,	type,		arg_name */
#define DPSW_CMD_FDB_ADD(cmd, cfg) \
do { \
	MC_CMD_OP(cmd, 0, 32, 16, uint16_t, cfg->fdb_aging_time);\
	MC_CMD_OP(cmd, 0, 48, 16, uint16_t, cfg->num_fdb_entries);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_RSP_FDB_ADD(cmd, fdb_id) \
	MC_RSP_OP(cmd, 0, 0,  16, uint16_t, fdb_id)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_FDB_REMOVE(cmd, fdb_id) \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, fdb_id)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_FDB_ADD_UNICAST(cmd, fdb_id, cfg) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, fdb_id);\
	MC_CMD_OP(cmd, 0, 16, 8,  uint8_t,  cfg->mac_addr[5]);\
	MC_CMD_OP(cmd, 0, 24, 8,  uint8_t,  cfg->mac_addr[4]);\
	MC_CMD_OP(cmd, 0, 32, 8,  uint8_t,  cfg->mac_addr[3]);\
	MC_CMD_OP(cmd, 0, 40, 8,  uint8_t,  cfg->mac_addr[2]);\
	MC_CMD_OP(cmd, 0, 48, 8,  uint8_t,  cfg->mac_addr[1]);\
	MC_CMD_OP(cmd, 0, 56, 8,  uint8_t,  cfg->mac_addr[0]);\
	MC_CMD_OP(cmd, 1, 0,  8,  uint16_t, cfg->if_egress);\
	MC_CMD_OP(cmd, 1, 16, 4,  enum dpsw_fdb_entry_type, cfg->type);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_FDB_GET_UNICAST(cmd, fdb_id) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, fdb_id);\
	MC_CMD_OP(cmd, 0, 16, 8,  uint8_t,  cfg->mac_addr[5]);\
	MC_CMD_OP(cmd, 0, 24, 8,  uint8_t,  cfg->mac_addr[4]);\
	MC_CMD_OP(cmd, 0, 32, 8,  uint8_t,  cfg->mac_addr[3]);\
	MC_CMD_OP(cmd, 0, 40, 8,  uint8_t,  cfg->mac_addr[2]);\
	MC_CMD_OP(cmd, 0, 48, 8,  uint8_t,  cfg->mac_addr[1]);\
	MC_CMD_OP(cmd, 0, 56, 8,  uint8_t,  cfg->mac_addr[0]);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_RSP_FDB_GET_UNICAST(cmd, cfg) \
do { \
	MC_RSP_OP(cmd, 1, 0,  16, uint16_t, cfg->if_egress);\
	MC_RSP_OP(cmd, 1, 16, 4,  enum dpsw_fdb_entry_type, cfg->type);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_FDB_REMOVE_UNICAST(cmd, fdb_id, cfg) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, fdb_id);\
	MC_CMD_OP(cmd, 0, 16, 8,  uint8_t,  cfg->mac_addr[5]);\
	MC_CMD_OP(cmd, 0, 24, 8,  uint8_t,  cfg->mac_addr[4]);\
	MC_CMD_OP(cmd, 0, 32, 8,  uint8_t,  cfg->mac_addr[3]);\
	MC_CMD_OP(cmd, 0, 40, 8,  uint8_t,  cfg->mac_addr[2]);\
	MC_CMD_OP(cmd, 0, 48, 8,  uint8_t,  cfg->mac_addr[1]);\
	MC_CMD_OP(cmd, 0, 56, 8,  uint8_t,  cfg->mac_addr[0]);\
	MC_CMD_OP(cmd, 1, 0,  16, uint16_t, cfg->if_egress);\
	MC_CMD_OP(cmd, 1, 16, 4,  enum dpsw_fdb_entry_type, cfg->type);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_FDB_ADD_MULTICAST(cmd, fdb_id, cfg) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, fdb_id);\
	MC_CMD_OP(cmd, 0, 16, 16, uint16_t, cfg->num_ifs);\
	MC_CMD_OP(cmd, 0, 32, 4,  enum dpsw_fdb_entry_type, cfg->type);\
	MC_CMD_OP(cmd, 1, 0,  8,  uint8_t,  cfg->mac_addr[5]);\
	MC_CMD_OP(cmd, 1, 8,  8,  uint8_t,  cfg->mac_addr[4]);\
	MC_CMD_OP(cmd, 1, 16, 8,  uint8_t,  cfg->mac_addr[3]);\
	MC_CMD_OP(cmd, 1, 24, 8,  uint8_t,  cfg->mac_addr[2]);\
	MC_CMD_OP(cmd, 1, 32, 8,  uint8_t,  cfg->mac_addr[1]);\
	MC_CMD_OP(cmd, 1, 40, 8,  uint8_t,  cfg->mac_addr[0]);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_FDB_GET_MULTICAST(cmd, fdb_id) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, fdb_id);\
	MC_CMD_OP(cmd, 0, 16, 8,  uint8_t,  cfg->mac_addr[5]);\
	MC_CMD_OP(cmd, 0, 24, 8,  uint8_t,  cfg->mac_addr[4]);\
	MC_CMD_OP(cmd, 0, 32, 8,  uint8_t,  cfg->mac_addr[3]);\
	MC_CMD_OP(cmd, 0, 40, 8,  uint8_t,  cfg->mac_addr[2]);\
	MC_CMD_OP(cmd, 0, 48, 8,  uint8_t,  cfg->mac_addr[1]);\
	MC_CMD_OP(cmd, 0, 56, 8,  uint8_t,  cfg->mac_addr[0]);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_RSP_FDB_GET_MULTICAST(cmd, cfg) \
do { \
	MC_RSP_OP(cmd, 1, 0,  16, uint16_t, cfg->num_ifs);\
	MC_RSP_OP(cmd, 1, 16, 4,  enum dpsw_fdb_entry_type, cfg->type);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_FDB_REMOVE_MULTICAST(cmd, fdb_id, cfg) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, fdb_id);\
	MC_CMD_OP(cmd, 0, 16, 16, uint16_t, cfg->num_ifs);\
	MC_CMD_OP(cmd, 0, 32, 4,  enum dpsw_fdb_entry_type, cfg->type);\
	MC_CMD_OP(cmd, 1, 0,  8,  uint8_t,  cfg->mac_addr[5]);\
	MC_CMD_OP(cmd, 1, 8,  8,  uint8_t,  cfg->mac_addr[4]);\
	MC_CMD_OP(cmd, 1, 16, 8,  uint8_t,  cfg->mac_addr[3]);\
	MC_CMD_OP(cmd, 1, 24, 8,  uint8_t,  cfg->mac_addr[2]);\
	MC_CMD_OP(cmd, 1, 32, 8,  uint8_t,  cfg->mac_addr[1]);\
	MC_CMD_OP(cmd, 1, 40, 8,  uint8_t,  cfg->mac_addr[0]);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_FDB_SET_LEARNING_MODE(cmd, fdb_id, mode) \
do { \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, fdb_id);\
	MC_CMD_OP(cmd, 0, 16, 4,  enum dpsw_fdb_learning_mode, mode);\
} while (0)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_CMD_FDB_GET_ATTR(cmd, fdb_id) \
	MC_CMD_OP(cmd, 0, 0,  16, uint16_t, fdb_id)

/*                cmd, param, offset, width, type, arg_name */
#define DPSW_RSP_FDB_GET_ATTR(cmd, attr) \
do { \
	MC_RSP_OP(cmd, 0, 16, 16, uint16_t, attr->max_fdb_entries);\
	MC_RSP_OP(cmd, 0, 32, 16, uint16_t, attr->fdb_aging_time);\
	MC_RSP_OP(cmd, 0, 48, 16, uint16_t, attr->num_fdb_mc_groups);\
	MC_RSP_OP(cmd, 1, 0,  16, uint16_t, attr->max_fdb_mc_groups);\
	MC_RSP_OP(cmd, 1, 16, 4,  enum dpsw_fdb_learning_mode, \
							  attr->learning_mode);\
} while (0)

#endif /* __FSL_DPSW_CMD_H */