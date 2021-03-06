library("ggplot2")
library("scales")
library("grid")
library("gridExtra")
args <- commandArgs()
mydata=read.csv(args[5],sep=" ")
theme_set(theme_bw())
 theme_update(plot.margin = unit(c(0,0,0,0), "cm"))
 mv=max(mydata$throughput)*1.4
pdf(file=args[7],height=2.54,width=16.51)
ggplot(data=mydata, aes(x=experiment, y=throughput, fill=structure)) + facet_grid(.~machine) +xlab("")+ylab("Throughput (Mops/s)") +geom_bar(stat="identity", colour="black",position=position_dodge())+geom_text(angle = 90, aes(label = paste(sprintf("%.1f", scalability), "", sep=""), y =throughput+mv/10), size = 5, position = position_dodge(width=0.9)) +scale_fill_brewer(palette="OrRd") + scale_x_discrete(expand = c(0, 0)) + scale_y_continuous(expand = c(0, 0),limits= c(0,mv))
#print(p1 + scale_x_discrete(expand = c(0, 0)) + scale_y_discrete(expand = c(0, 0)))
dev.off()
